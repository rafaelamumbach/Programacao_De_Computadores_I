//C00350 - Faça um algoritmo que leia 3 valores a, b e c, lados de um triângulo, e verifique o tipo de triângulo formado
//escrevendo: 0 - se o triângulo é equilátero (os três lados são iguais); 1 - se o triângulo é isósceles (dois lados iguais e um
//diferente);2 - escaleno (3 lados diferentes).
//algoritmo "C002_C00000350"
// Autor : rmbuenos
// Data : 04/09/2023
#include <stdio.h>

void main(){
         int a, b, c;
         printf("Informe os lados do triangulo:\n");
         printf("Lado A: ");
         scanf("%d", &a);
         printf("Lado B: ");
         scanf("%d", &b);
         printf("Lado C: ");
         scanf("%d", &c);
         printf("\n");
         
         if (a + b > c && a + c > b && b + c > a){
         if (a == b && b == c){
            printf("0\n"); //equilátero
        }
        else if (a == b || a == c || b == c){
            printf("1\n"); //isósceles
        }
        else {
            printf("2\n"); //escaleno
        }
    } else {
        printf("Os lados informados nao formam um triangulo.\n");
    }
}