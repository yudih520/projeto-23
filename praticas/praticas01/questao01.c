/*
Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
  */

#include <stdio.h>

int main() {
float nota_a1;
float nota_a2;

  printf("Entre com a nota A1: ");
  scanf("%f", &nota_a1);

  printf("Entre com a nota A2: ");
  scanf("%f", &nota_a2);

float media = 0.4 * nota_a1 + 0.6 * nota_a2;

printf("A media e %.2f\n", media);

return 0;

}