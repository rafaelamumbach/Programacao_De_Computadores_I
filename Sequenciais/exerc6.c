//algoritmo "S001_S00800"
// Autor : RMBuenos
// Data : 31/08/2023
#include <stdio.h>

 void main(void){

    int qtdSegundos, horas, minutos, segundos ;
    printf("Quantidade de Segundos: ");
    scanf("%d",&qtdSegundos);

    horas = qtdSegundos/3600;
    qtdSegundos = qtdSegundos%3600;

    minutos = qtdSegundos/60;
    segundos = qtdSegundos%60;
  
    printf(" Horas: %d \n",horas);
    printf(" Minutos: %d \n",minutos);
    printf(" Segundos: %d \n",segundos);
}