/*
  Construa um programa que calcule a soma de dois numeros
*/
#include <stdio.h> //incluir as bibliotecas
#include <math.h>

int main() {
int a, b, soma;// funcao principal
  printf("Digite o primeiro numero: ");
  scanf( "%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  soma = a + b;
  printf("A soma de %d e %d eh %d\n", a, b, soma);
  printf("seno de 0 eh %f\n", sin(0));
  return 0;
}
  
