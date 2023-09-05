//C00020 - Faça um algoritmo que leia um valor e escreva: 0, se o valor é zero; 1,
//e o valor é maior que zero; -1 - se o valor é negativo.
//algoritmo "C002_C00000020"
// Autor : rmbuenos
// Data : 01/09/2023
#include <stdio.h>

void main(){
    int valor;
    printf("Informe um valor: ");
    scanf("%d", &valor);
    
    if (valor == 0){
        printf("0");
    }
    
    if (valor > 0){
        printf("1");
    }

    if (valor < 0){
        printf("-1");
    }
}