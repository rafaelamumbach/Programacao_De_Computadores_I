//algoritmo "S001_S00000200"
// Autor : RMBuenos
// Data : 07/08/2023
#include <stdio.h>

void main(){
    float v1, v2;
    printf("Digite a base do triangulo (v1): ");
    scanf("%f", &v1);

    printf("Digite a altura do triangulo (v2): ");
    scanf("%f", &v2);

    float area = (v1 * v2)/2;
    printf("A area do triangulo de base %.2f e altura %.2f eh de: %.2f)", v1, v2, area);
}