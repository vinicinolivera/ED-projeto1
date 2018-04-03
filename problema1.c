#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int fneuronio(float *entradas, float *pesos, float T, int max);

int main(){
  float T;
  float entradas[MAX], pesos[MAX];
  //int MAX = 10;
  //valores entradas
  printf("Insira 10 valores das entradas\n");
  for(int i = 0; i<MAX; i++){
	  printf("Entrada %d: ", i+1);
	  scanf("%f", &entradas[i]);
  }
  //valores pesos
  printf("Insira 10 valores dos Pesos\n");
  for(int i = 0; i < MAX; i++){
	  printf("Peso %d: ", i+1);
	  scanf("%f", &pesos[i]);
  }
  //valor limiar
  printf("Insira O valor Limiar\n");
  scanf("%f", &T);


  if(fneuronio(entradas, pesos, T, MAX) == 1){
    printf("Neurônio ativado!\n");
  }
  else{
    printf("Neurônio inibido!\n");
  }

  return 0;
}

//função com passagem por referência
int fneuronio(float *entradas, float *pesos, float T, int max){
  float soma_p = 0;
  for(int i = 0; i < max; i++){
    soma_p = soma_p + entradas[i]*pesos[i];
  }

  if(soma_p > T){
    return 1;
  }
  else{
    return 0;
  }
}
