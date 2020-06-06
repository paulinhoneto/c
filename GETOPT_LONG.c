#include "getopt.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* O nome desse programa */
const char* program_name;

/* Mostre informações do uso do programa */
void print_usage (FILE* stream, int exit_code)
{
  fprintf(stream, "\nUso: %s opcoes [arquivoentrada ...]\n\n", program_name);
  fprintf(stream,
          " --h  --help             Mostra essa informação de uso.\n"
          " --o  --output filename  Escreve a saída para arquivo.\n"
          " --v  --verbose          Mostra mensagens detalhadas.\n\n");
  exit(exit_code); 
}

int main (int argc, char* argv[])
{

  
  int next_option;

  /*  uma string listando letras validas de opções curtas */
  const char* const short_options = "ho:v";
  /* um array descrevendo opções longas validas. */
  const struct option long_options[] = {
    { "help",        0, NULL, 'h'},
    { "output",      1, NULL, 'o'},
    { "verbose",     0, NULL, 'v'},
    { NULL,          0, NULL, 0} /* requirido no final do array */
  };
  
  /* nome do arquivo que recebe a saida do programa, ou NULL para saida do programa */
  const char* output_filename = NULL;

  /* se mostra mensagens detalhadas */
  int verbose = 0;

  /* nome do programa e armazenado em argv[0] */
  program_name = argv[0];

  do {
    next_option = getopt_long(argc, argv, short_options, long_options, NULL);

    switch (next_option)
    {
      case 'h': /* -h ou --help */
        print_usage(stdout, 0);
        break;

      case 'o': /* -o ou --output */
        output_filename = optarg;
        break;
      
      case 'v': /* -v ou --verbose */
        verbose = 1;
        break;

      case '?': /* usuario especificou uma opção invalida */
        print_usage(stderr, 1);

      case -1:  /* terminando com as opções */
        abort();
    }
  }
  while(next_option != -1);

  if (verbose) {
    int i; 
    for (i = optind; i < argc; ++i)
      printf("Argumento: %s\n", argv[i]);
  }

  return 0;
}

