//algoritmo "S001_S001000"
// Autor : RMBuenos
// Data : 31/08/2023
#include <stdio.h>

void main() {
    int valor, soma = 0;

    printf("Digite um valor entre 0 e 9999: ");
    scanf("%d", &valor);

    int divisor = 1000;
    
    soma = soma + (valor / divisor);
    valor = valor % divisor;

    divisor = divisor / 10;
    
    soma = soma + (valor / divisor);
    valor = valor % divisor;

    divisor = divisor / 10;

    soma = soma + (valor / divisor);
    valor = valor % divisor;

    divisor = divisor / 10;

    soma = soma + (valor / divisor);

    printf("A soma dos digitos eh: %d\n", soma);
}