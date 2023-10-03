#include <stdio.h>
int main(void) {
    int num, resto, inst_fin;
    printf("Digite o numero do cartao de credito:\n");
    scanf("%d",&num);
    resto=num%100000000;
    printf("%d\n",resto);
    inst_fin=resto/100000;
    printf("Dados da instituicao financeira: %d\n",inst_fin);
}