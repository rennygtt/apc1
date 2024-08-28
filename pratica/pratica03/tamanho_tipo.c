#include <stdio.h>

int main () {
printf("tamanho do char na memoria = %lu\n", sizeof(char));
printf(" o tipo 'int'ocupa %lu bytes na memoria\n", sizeof(int));
printf(" o tipo 'float'ocupa %lu bytes na memoria\n", sizeof(float));  
printf(" o tipo 'double'ocupa %lu bytes na memoria\n", sizeof(double));
printf("o  tipo 'void'ocupa %lu bytes na memoria\n", sizeof(void));
  
  return 0;
}