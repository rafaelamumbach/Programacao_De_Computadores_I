//C00040 - Faça um algoritmo que leia um valor e escreva: 0, se o valor é par; 1, se o valor é ímpar.
//algoritmo "C001_C00000040"
// Autor : rmbuenos
// Data : 01/09/2023
#include <stdio.h>

void main(){
	int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    if (valor % 2 == 0){ 
        printf("0\n"); //se for par
    }

        else {
          printf("1\n"); //se for ímpar
    }
}