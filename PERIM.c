/*
file:
PERIM.c
description:
informa o perimetro de uma circunferência
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main(){
  float raio;

  printf("\nDigite a medida do raio: ");
  scanf("%f", &raio);

  float perimetro;
  perimetro = 2*PI*raio;

  printf("O perímetro é %.2f\n\n", perimetro);
}

