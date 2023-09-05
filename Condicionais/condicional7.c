//C00300 - Faça um algoritmo que leia 3 valores a, b e c, coeficientes de uma equação de segundo grau, e verifique 
//se a equação tem raízes reais. Se a equação tiver raízes reais, calcule e escreva as raízes da equação
//(em ordem crescente). Se não tiver, escreva "A equação não possui raízes reais".
//algoritmo "C001_C00000300"
// Autor : rmbuenos
// Data : 04/09/2023
#include <stdio.h>
#include <math.h>

void main(){
    float a, b, c;
         printf("Informe o coeficiente (a): ");
         scanf("%f", &a);
         printf("Informe o coeficiente (b): ");
         scanf("%f", &b);
         printf("Informe o coeficiente (c): ");
         scanf("%f", &c);

         float delta = pow(b,2)-4*a*c; //pow = b elevado ao quadrado

         if (delta >= 0){
                  float raiz1 = (-b + sqrt (delta)) / (2*a); //sqrt = raiz quadrada
                  float raiz2 = (-b - sqrt (delta)) / (2*a);
                  printf("Raiz 1: %.2f\n", raiz1);
                  printf("Raiz 2: %.2f\n", raiz2);
         }
         else {
                  printf("A equação não possui raízes reais.");
         }
}