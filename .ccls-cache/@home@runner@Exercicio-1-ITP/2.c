#include <stdio.h>


int main(void) {
  //lê três valores do tipo inteiro e guarda em três variáveis diferentes

int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  //imprime a soma dessas três variáveis
  printf("\n%d", a+b+c);
  //imprime o produto dessas três variáveis
  printf("\n%d", a*b*c);
  return 0;
}