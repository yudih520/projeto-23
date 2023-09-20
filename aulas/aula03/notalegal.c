#include <stdio.h> // scanf - ler; printf - escrever

int main(){
  char item1[61];
  int quantidade1;
  float preco1;
  
  char item2[61];
  int quantidade2;
  float preco2;
  
  char item3[61];
  int quantidade3;
  float preco3;

  printf("Entre com o nome do item1: ");
  scanf("%s", item1);
  printf("Entre com a qtde do item1: ");
  scanf("%i", &quantidade1);
  printf("Entre com o preco do item: ");
  scanf("%f", &preco1);
  
  printf("Entre com o nome do item2: ");
  scanf("%s", item2);
  printf("Entre com a qtde do item2: ");
  scanf("%i", &quantidade2);
  printf("Entre com o preco do item2: ");
  scanf("%f", &preco2);
  
  printf("Entre com o nome do item3: ");
  scanf("%s", item3);
  printf("Entre com a qtde do item3: ");
  scanf("%i", &quantidade3);
  printf("Entre com o preco do item3: ");
  scanf("%f", &preco3);
  
  float total = quantidade1 * preco1;
  total = total + quantidade2 * preco2;
  total = total + quantidade3 * preco3;
  
  printf("--------------------------\n");
  printf("        NOTAL LEGAL       \n");
  printf("--------------------------\n");
  printf("Item           Qtd Valor  \n");
  printf("%-14s %03i %7.2f\n", item1, quantidade1, preco1);
  printf("%-14s %03i %7.2f\n", item2, quantidade2, preco2);
  printf("%-14s %03i %7.2f\n", item3, quantidade3, preco3);
  printf("--------------------------\n");
  printf("Total           R$ %7.2f\n", total);
  printf("--------------------------\n");

  return 0;
}