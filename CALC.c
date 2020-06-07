#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main() {
  
  int x = 10, y = 5;
  long z = 920102010204339, w = 23212932932329;
  float a = 12.5, b = 10.25;

  TwoAdd(x, y);
  TwoSub(x, y);

  TwoAddL(z, w);
  TwoSubL(z, w);

  TwoAddF(a, b);
  TwoSubF(a, b);

  return EXIT_SUCCESS;

}

void TwoAdd(int x, int y) {
  printf("\nAddition result = %d\n", x + y);
}

void TwoSub(int x, int y) {
  printf("Subtration result = %d\n", x - y);
}

void TwoAddL(long z, long w) {
  printf("\nAddition result Long = %ld\n", z + w);
}

void TwoSubL(long z, long w) {
  printf("Subtration result Long = %ld\n", z - w);
}

void TwoAddF(float a, float b){
  printf("\nAddition result Float = %.2f\n", a + b);
}

void TwoSubF(float a, float b){
  printf("Subtration result Float = %.2f\n\n", a - b);
}



