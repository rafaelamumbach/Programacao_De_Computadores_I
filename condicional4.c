//C00080 - Faça um algoritmo que leia dois valores e escreva os dois em ordem crescente
//algoritmo "C001_C00000080"
// Autor : rmbuenos
// Data : 01/09/2023
#include <stdio.h>

void main(){
    int val1, val2;
    printf("Digite dois valores diferentes: ");
    scanf("%d %d", &val1, &val2);

    if (val1 < val2){
        printf("Ordem crescente: %d  %d\n", val1, val2);
    }
    else {
        printf("Ordem crescente: %d  %d\n", val2, val1);
    }
}