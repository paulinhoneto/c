/*
file:
IMC.c
description:
informa o indice de massa corporea de uma pessoa.
informa se a pessoa esta ou não obesa.
informa o risco = quantos kilos ela deve ter para ficar obesa.
informa a margem de risco - quantos kilos faltam para ela ficar obesa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LIMITE 30

int main() {
  float peso, altura, imc, risco, margem;

  printf("\nDigite seu peso: ");
  scanf("%f", &peso);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  
  imc = peso/pow(altura, 2);

  printf("\nSeu i.m.c é %.1f", imc);

  if(imc <= LIMITE) 
    printf("\nResultado final: Você não está obeso.\n");
  else
    printf("\nResultado final: Você está obeso.\n");

  risco = pow(altura, 2)*LIMITE;
  printf("\nRisco: %.1fkg", risco);

  margem = risco - peso;
  printf("\nMargem de risco: %.1fkg\n\n", margem);

  return(0); 
  
}
