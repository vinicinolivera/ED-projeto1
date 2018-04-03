//Obs.: recebe um vertor e passar um outro vetor retornando void
#include <stdio.h>
#include <stdlib.h>

#define Max 10;

int main(){
  float notas[10];
  for(int i = 0; i < 10; i++){
    scanf("%f", &notas[i]);
  }

  return 0;
}

//função com passagem por referência
//recebe um vertor e passar um outro vetor retornando void
int *recebe_notas(float *notas, int num_elementos){
  int *APR;
  for(int i = 0; i < num_elementos; i++){
    if(notas[i] >= 6.0){
      APR[i] = 1;
    }
    else{
      APR[i] = 0;
    }
  }

  return APR;
}

//recebe um vertor e passar um outro vetor retornando void
void conta_notas(int *APR, int num_elementos){
  int reprovados = 0, aprovados = 0;
  int *vetor_aprov_reprov;
  for(int i = 0; i < num_elementos; i++){
    if(APR[i] == 1){
      aprovados += 1;
    }
    else{
      reprovados += 1;
    }
  }

  vetor_aprov_reprov[0] = aprovados;
  vetor_aprov_reprov[1] = reprovados;
}

int percent_aprov(int reprovados, int aprovados){


  if(maior_aprovacao == true){
    return 1;
  }
  else{
    return 0;
  }
}
