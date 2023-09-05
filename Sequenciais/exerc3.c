//algoritmo "S002_S00000150"
// Autor : RMBuenos
// Data : 07/08/2023
#include <stdio.h>

void main(){
    float a, b, c;
    printf("Digite a primeira nota: ");
    scanf("%f", &a);

    printf("Digite a segunda nota: ");
    scanf("%f", &b);

    printf("Digite a terceira nota: ");
    scanf("%f", &c);

    float media = (a + b + c) / 3;
    printf("A media aritmetica das notas do aluno eh %.2f", media);
}