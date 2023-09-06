/* Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
  */

#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.076f
#define PIS_PASEP 0.0165f

int main(){

  float preco_inicial = 100.0f;
  float valor_icms = preco_inicial * ICMS;
  float valor_cofins = preco_inicial * COFINS;
  float valor_pis_pasep = preco_inicial * PIS_PASEP;
  
  float preco_final =(1 + ICMS + COFINS + PIS_PASEP) * preco_inicial; // preco_inicial + valor_icms + valor_cofins + valor_pis_pasep  
  
printf ("preco final do produto %.2f\n", preco_final);
  printf ("o valor do imposto ICMS %.2f\n",valor_icms);
  printf ( "o valor do imposto COFINS %.2f\n ", valor_cofins);
  printf (" o valor do imposto PIS_PASEP %.2f\n", valor_pis_pasep);
  
return 0;
}