#include <stdio.h>

int global = 10; // variavel compartilhada

int main(){
 int local = 20; // variavel temporaria
  {
    int local = 10;
    int temp = global + local;

    printf ("temp = %i\n", temp);
  }
  
    int temp = global + local;

    printf ("temp = %i\n", temp);
  
  return 0;
}