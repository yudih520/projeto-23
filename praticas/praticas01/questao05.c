/* 
Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/
#include <stdio.h>
#include <math.h>

int main(){
double valor_em_gigas = 10;
  
double valor_em_bytes = valor_em_gigas * pow(1024, 3);  

printf("o valor em gigas %f em bytes e %f\n", valor_em_gigas, valor_em_bytes);

return 0;
}