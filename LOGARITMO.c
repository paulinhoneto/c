#include <stdio.h>
#include <stdlib.h>

int logaritmo(int);

int main(int argc, char* argv[]){
  int B = strtol(argv[1], NULL, 10);
  int K = strtol(argv[2], NULL, 10);

  int N = 1;
  printf("\n         N logaritimo(N)\n\n");
  for(int i =1; i <= K; ++i) {
    N = B * N;
    printf("%11d %5d\n", N, logaritmo(N));
  }
  return EXIT_SUCCESS;
}

int logaritmo(int N)
{
  int i = 0, n = N;
  while (n > 1) {
    i += 1;
    n /=2;
  }
  return i;
}

// Exemplo com B = 10 e K = 6:
// $ ./pisolog 10 6
//
//           N  lg(N)
//
//          10     3
//         100     6
//        1000     9
//       10000    13
//      100000    16
//     1000000    19
