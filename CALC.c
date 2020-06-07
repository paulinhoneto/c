#include <stdio.h>
#include <stdlib.h>
#include "calc.c"

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

  TwoDiv(x, y);
  
  return EXIT_SUCCESS;
}










