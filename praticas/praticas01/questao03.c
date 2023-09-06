/* Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/
#include <stdio.h>
#include <math.h>

int main(){

  float r = 20;
  const float PI = 3.1416f;

  float p = 2 * PI * r;

  printf("o perimetro da pizza e %f\n",p);
  
  return 0;
}