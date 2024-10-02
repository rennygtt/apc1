#include <stdio.h>

//entrada
 int main() {
 int numero1;
 int numero2;
 float numero3;  

   printf("Digite um número inteiro: ");
  scanf("%i",numero1);
   printf("Digite outro número inteiro: ");
  scanf("%i",numero2);
   printf("Digite um número flutuante: ");
  scanf("%f",numero3);
  
// Processamento
   int soma = numero1 + numero2;
   int subtracao = numero1 - numero2;
   int multiplicacao = numero1 * numero2;
   int divisao = numero1 / numero2;
   int resto_divisao = numero1 % numero2;
   float fracao = numero1 / numero3;
  
//saida
  printf("%i + %i =%i\n", numero1, numero2, soma)
  printf("%i - %i =%i\n", numero1, numero2, subtracao);
  printf("%i * %i =%i\n", numero1, numero2, multiplicacao);
  prinft("%i / %i =%i\n", numero1, numero2, divisao);
  printf("%i / %i =%i\n", numero1, numero2, fracao); 
  prinft("%i %% %i =%i\n", numero1, numero2, resto_divisao); 


   return 0;
}