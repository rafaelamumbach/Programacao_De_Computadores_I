//C00200 - Faça um algoritmo que leia 3 valores v1, v2 e v3 e coloque-os em ordem decrescente, de forma
//que v1 contenha o maior, v2 contenha o elemento do meio (nem o maior, nem o menor), e v3 contenha o menor. 
//Escreva os valores ordenados em ordem decrescente. 
//algoritmo "C001_C00000200"
// Autor : rmbuenos
// Data : 04/09/2023
#include <stdio.h>

void main(){
    int v1, v2, v3;

    printf("Digite o valor (v1): ");
    scanf("%d", &v1);
    printf("Digite o valor (v2): ");
    scanf("%d", &v2);
    printf("Digite o valor (v3): ");
    scanf("%d", &v3);

    if (v1 < v2){
        v1 = v1 + v2;
        v2 = v1 - v2;
        v1 = v1 - v2;
    }

    if (v2 < v3){
        v2 = v2 + v3;
        v3 = v2 - v3;
        v2 = v2 - v3;
    }

    if (v1 < v2){
        v1 = v1 + v2;
        v2 = v1 - v2;
        v1 = v1 - v2;
    }

    printf("Valores em ordem decrescente: %d %d %d\n", v1, v2, v3);
}