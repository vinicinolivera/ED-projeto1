#include<stdio.h>
#include<stdlib.h>


#define tam 10 //quantidade de alunos


//funÃ§Ã£o recebe um ponteiro de float para notas e um para aprovaÃ§Ãµes e um int para tamanho

void recebe_notas(float *notas, int *apr, int tamanho  ){
	int i = 0;
	for(i=0; i< tamanho; i++){
		if(notas[i] >=6.0){
			*(apr+i) = 1;
		}else{
			*(apr+i) = 0;
		}
	}
}


//funÃ§Ã£o recebe um ponteiro de float para notas e um para aprovaÃ§Ãµes e um int para tamanho

void conta_notas(int*notas, int *aprovados, int *reprovados, int tamanho){
	int i=0;
	for(i; i< tamanho;i++){
		if(*(notas+i) ==1)
			*aprovados +=1;
		else
			*reprovados +=1;
	}
}


// funÃ§Ã£o que recebe um refÃªncia para percentual de aprovados e reprovados


int  percent_aprov( float *perc_apv, float *perc_rep, int aprovados, int  reprovados){
	int totalAlunos= (aprovados+reprovados);
	*perc_apv = (aprovados *(1.0)/totalAlunos*(1.0));
	*perc_rep = (reprovados *(1.0)/totalAlunos*(1.0));

	if(aprovados > (totalAlunos*0.5))
		return 1;
	else
		return 0;


}



int main(){
	float notas[tam];//vetor de notas
	int aprovados[tam];//vetor de aprovaÃ§Ãµes
	int apv=0, rep =0;//quantidade de aprovados e de reprovados
	int i=0, maioria_apv =0;// variÃ¡vel para guardar se a maioria da turma foi aprovadas(1) OU reprovada(0), default =0
	float perc_apv= 0, perc_rep=0;//percentuais de aprovaÃ§Ãµes e reprovaÃ§Ãµes

	printf("Digite %i notas:\n", tam);
	for(i=0;i< tam ;i++)
		scanf("%f",&notas[i]);
	recebe_notas(notas, aprovados,tam);


	conta_notas(aprovados, &apv,&rep, tam);

// - Quantidade de aprovados;
printf("Quantidade de aprovados: %i\n",apv);
// - Quantidade de reprovados;
printf("Quantidade de reprovados: %i\n",rep);
	maioria_apv = percent_aprov(&perc_apv,&perc_rep, apv, rep);


// - Percentual de aprovados;
// - Percentual de reprovados; e
// - Se mais da metade da turma aprovada.

	printf("Percentual da turma\nAprovados: %5.2f\nReprovados:  %5.2f\n",perc_apv*100.00,perc_rep*100.00);

	printf("\nmaioria aprovada: ");
	if(maioria_apv == 1)
		printf("SIM.\n");
	else
		printf("NAO.\n");
	return 0;
}
