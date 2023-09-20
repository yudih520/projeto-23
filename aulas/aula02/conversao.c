#include <stdio.h>

int main(){
  char caracter = 127;
  int inteiro = caracter;//sucesso - conversao implicita
  float flutuante = inteiro; // conversao implicita, porem cuidado com as casas decimais
  double duplo = flutuante; // conversao implicita

  printf("o caracter %c convertido para inteiro %d\n", caracter, inteiro);
  printf("o inteiro %d convertido para flutuante %f\n", inteiro, flutuante);
  printf("o flutuante %f convertido para duplo %f\n", flutuante, duplo);

  duplo = 270.13456;
  flutuante = (float) duplo; // conversao explicita
  inteiro = (int) flutuante; //conversao explicita
  caracter = (char) inteiro; // conversao explicita
  
  printf("o duplo %f convertido para fultuante %f\n", duplo, flutuante);
  printf("o fulutuante %f convertido para inteiro %d\n", flutuante, inteiro);
  printf("o inteiro %d convertido para caracter %d\n", inteiro, caracter);

  return 0;
}