#include <stdio.h>
int main(void) {
    int diai,mesi,diaf,mesf,num_pessoas,qtd_dias,ult_dia;
     float diaria,valor;
     printf ("Informe o dia inicial:\n");
     scanf("%d",&diai);
     printf ("Informe o mes inicial:\n");
     scanf("%d",&mesi);
     printf ("Informe o dia final:\n");
     scanf("%d",&diaf);
     printf ("Informe o mes final:\n");
     scanf("%d",&mesf);
     printf("Informe o numero de pessoas: \n");
     scanf("%d",&num_pessoas);
     printf("Valor da diaria:\n");
     scanf("%f",&diaria);
     if (mesi==mesf)
         qtd_dias=diaf-diai;
     else {
         if (mesi==1 || mesi==3 || mesi==5 || mesi==7 || mesi==8 || mesi==10)
             ult_dia=31;
         if (mesi==4 || mesi==6 || mesi==9 || mesi==11)
             ult_dia=30;
         if (mesi==2)
             ult_dia=28;
         qtd_dias=(ult_dia-diai)+diaf;
     }
     valor=qtd_dias*num_pessoas*diaria;
     if (qtd_dias>10){
         valor=valor-(valor*0.10);
      }
     printf ("Valor total a ser pago: R$ %.2f\n",valor);
}