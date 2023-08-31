//algoritmo "S001_S00700"
// Autor : RMBuenos
// Data : 31/08/2023
#include <stdio.h>

void main(){
    int valor;
    printf("Valor em reais: ");
    scanf("%d",&valor);

    int notas100 = valor/100;
    int resto = valor%100;

    int notas50 = resto/50;
    resto = resto%50;

    int notas20 = resto/20;
    resto = resto%20;

    int notas10 = resto/10;
    resto = resto%10;

    int notas5 = resto/5;
    resto = resto%5;

    int notas2 = resto/2;
    int notas1 = resto%2;
  
    printf(" Notas de 100: %d \n",notas100);
    printf(" Notas de 50: %d \n",notas50);
    printf(" Notas de 20: %d \n",notas20);
    printf(" Notas de 10: %d \n",notas10);
    printf(" Notas de 5: %d \n",notas5);
    printf(" Notas de 2: %d \n",notas2);
    printf(" Notas de 1: %d \n",notas1);
}