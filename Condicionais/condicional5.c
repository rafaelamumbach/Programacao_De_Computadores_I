//C00100 - Faça um algoritmo que leia 3 valores v1, v2 e v3, e escreva-os em ordem crescente.
//algoritmo "C003_C00000100"
// Autor : rmbuenos
// Data : 04/09/2023
#include <stdio.h>

void main(){
    int v1, v2, v3;
    printf("Digite um valor (v1):\n");
    printf("Digite um valor (v2):\n");    
    printf("Digite um valor (v3):\n");
    scanf("%d %d %d", &v1, &v2, &v3);

    if (v1 > v2 && v1 > v3){
        if (v2 > v3) {
            printf("Ordem crescente: %d %d %d\n", v3, v2, v1);
        } else {
            printf("Ordem crescente: %d %d %d\n", v2, v3, v1);
        }
    } else if (v2 > v1 && v2 > v3){
        if (v1 > v3){
            printf("Ordem crescente: %d %d %d\n", v3, v1, v2);
        } else {
            printf("Ordem crescente: %d %d %d\n", v1, v3, v2);
        }
    } else {
        if (v1 > v2){
            printf("Ordem crescente: %d %d %d\n", v2, v1, v3);
        } else {
            printf("Ordem crescente: %d %d %d\n", v1, v2, v3);
        }
    }
}