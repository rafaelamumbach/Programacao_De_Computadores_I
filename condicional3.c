//C00060 - Faça um algoritmo que leia dois valores e, através de uma comparação,
//escreva o maior deles. Considere que os dois valores são diferentes.
//algoritmo "C001_C00000060"
// Autor : rmbuenos
// Data : 01/09/2023
#include <stdio.h>

void main(){
    int valor1, valor2;
    printf("Escreva dois valores diferentes:\n");
    scanf("%d %d", &valor1, &valor2);
    
    if (valor1 > valor2){
        printf("O primeiro valor eh maior!");
    }
    else {
        printf("O segundo valor eh maior!");
    }
}