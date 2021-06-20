#include<stdio.h>
#include "lib_calc.h"
#include<stdlib.h>

int main(int argc, char ** argv) {
  int a, b;
  char option;

  a = strtol(argv[1], (char **)NULL, 10);
  b = strtol(argv[3], (char **)NULL, 10);

  switch (argv[2][0]) {
    case '+': printf("%d + %d = %d\n", a, b, somar(a, b)); break;
    case '-': printf("%d - %d = %d\n", a, b, subtrair(a, b)); break;
    case '*': printf("%d * %d = %d\n", a, b, multiplicar(a, b)); break;
    case '/': printf("%d / %d = %d\n", a, b, dividir(a, b)); break;
    default: printf("Invalid option\n");
  }

  return 0;
}
