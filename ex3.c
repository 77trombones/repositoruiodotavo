#include <stdio.h>

void main(void) {
  float peso;
  float altura;
  int imc;

  printf("Digite sua altura e peso atual:"); 
  scanf("%d", &peso, &altura);

  imc = peso / (altura * altura);

  printf("seu IMC atual eh %f ", imc);
}