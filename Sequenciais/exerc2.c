//algoritmo "S007_S00000100"
// Autor : RMBuenos
// Data : 07/08/2023
#include <stdio.h>

void main(){
    int a, b;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);

    printf("Digite outro valor inteiro: ");
    scanf("%d", &b);

    int soma = a + b;
    printf("A soma de %d e %d eh: %d.", a, b, soma);
}