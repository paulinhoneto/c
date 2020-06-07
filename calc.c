#include <stdio.h>
#include "calc.h"

void TwoMulL(long x, long y) {
  printf("\nMultiplication result Long = %ld\n", x * y);
}

void TwoMulF(float x, float y) {
  printf("\nMultiplication result Float = %.2f\n", x * y);
}

void TwoMul(int x, int y) {
  printf("\nMultiplication result Integer = %d\n", x * y);
}

void TwoDivL(long x, long y) {
  printf("\nDivision result Long = %ld\n", x / y);
}

void TwoDivF(float x, float y) {
  printf("\nDivsion result Float = %.2f\n", x / y);
}

void TwoDiv(int x, int y) {
  printf("\nDivision result Integer = %d\n", x / y);
}

void TwoAddL(long x, long y) {
  printf("\nAddition result Long = %ld\n", x + y);
}

void TwoAddF(float x, float y){
  printf("\nAddition result Float = %.2f\n", x + y);
}

void TwoAdd(int x, int y) {
  printf("\nAddition result Integer = %d\n", x + y);
}

void TwoSubL(long x, long y) {
  printf("\nSubtration result Long = %ld\n", x - y);
}

void TwoSubF(float x, float y){
  printf("\nSubtration result Float = %.2f\n", x - y);
}

void TwoSub(int x, int y) {
  printf("\nSubtration result Integer = %d\n", x - y);
}

