#include <stdio.h>

int main(){
  float n1, n2, media;

  printf("\nInforme as duas notas obtidas: ");
  scanf("%f %f", &n1, &n2);

  media = (n1 + n2)/2;

  if(media >= 7.0)
    printf("Status: aprovado\n\n");
  else 
    printf("Status: reprovado\n\n");
}