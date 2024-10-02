#include <stdio.h>

int main() {
  //para imprimir um texto
  printf("loco de bala loco de bala\n\n");
  
  //para imprimir números inteiros
  printf("%i\n\n", 10);
  printf("%i %i %i %i\n\n", 1, 22, 4444, 55555);
  printf("%5i\n\n",110);
  printf("%05i\n\n",1);
  
  //imprime um numero decimal
  printf("%f\n", 13.3);
  //para aparecer apenas duas casa decimais
  printf("%5.2f\n", 666.666);
  printf("%10.2f\n", 333.333);
  
  //impreme um caractere que é aspas simples
  printf("%c\n\n", 'R');
  printf("%c\n",90);

  //dentro do roteiro
  printf("%-20s\n\n", "cafe");


  return 0;
  
}