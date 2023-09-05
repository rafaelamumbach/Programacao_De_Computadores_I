//algoritmo "S001_S00300"
// Autor : RMBuenos
// Data : 01/09/2023
#include <stdio.h>
#include <math.h>

void main(){
    float a, b, c;
    float delta, raiz1, raiz2;

    printf("Digite os coeficientes da equacao (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    raiz1 = (-b + sqrt(delta)) / (2 * a);
    raiz2 = (-b - sqrt(delta)) / (2 * a);

    printf("Raiz 1: %f\n", raiz1);
    printf("Raiz 2: %f\n", raiz2);
}