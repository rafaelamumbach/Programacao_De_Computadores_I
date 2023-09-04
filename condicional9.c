//C00500 - Faça um algoritmo que leia 3 notas de um aluno e escreva sua média harmônica. Dica: A média harmônica entre três valores N1, N2 e N3
//é calculada pela expressão 3/(1/N1+1/N2+1/N3). O que acontece se alguma das notas for igual a 0? Que resultado o algoritmo deve emitir? 
//algoritmo "C001_C00000500"
// Autor : rmbuenos
// Data : 04/09/2023
#include <stdio.h>

void main(){
    float nota1, nota2, nota3;
    printf("Informe a nota 1: ");
    scanf("%f", &nota1);
    printf("Informe a nota 2: ");
    scanf("%f", &nota2);
    printf("Informe a nota 3: ");
    scanf("%f", &nota3);

    if (nota1 <=0 || nota2 <=0 || nota3 <=0){ 
       printf("Nao eh possivel dividir um numero por zero!\nInsira novamente as notas.\n");
       
       }
       else{

         float media_harmonica = 3 / (1/nota1 + 1/nota2 + 1/nota3);

         printf("A media harmonica das tres notas informadas eh: %.2f", media_harmonica);
         }
}