#include <stdio.h>

void main(){
    float nota1, nota2, nota3;
    printf("** Media Programacao de Computadores I :) **\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    float media_final = 6 / nota1 / 1 + nota2 / 2 + nota3 / 3 ;

    printf("Media final: %.2f", media_final);
}