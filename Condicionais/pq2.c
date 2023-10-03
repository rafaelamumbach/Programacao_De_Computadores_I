#include <stdio.h>
int main(void) {
    int cod_espumante,cod_pagamento,qtd,valor=0;
    printf("Informe o codigo do espumante:\n");
     scanf("%d",&cod_espumante);
     printf("Informe o codigo da condicao de pagamento:\n");
     scanf("%d",&cod_pagamento);
     printf("Quantidade de espumantes:\n");
     scanf("%d",&qtd);
     if ((cod_espumante>=1&&cod_espumante<=5)&&(cod_pagamento>=1&&cod_pagamento<=4)){
         if (cod_espumante==1)
             valor=qtd*85;
         if (cod_espumante==2)
             valor=qtd*90;
         if (cod_espumante==3)
             valor=qtd*115;
         if (cod_espumante==4)
             valor=qtd*120;
         if (cod_espumante==5)
             valor=qtd*225;
         if (cod_pagamento==1)
             valor=valor-(valor*0.1);
         if (cod_pagamento==2)
             valor=valor-(valor*0.05);
         if (cod_pagamento==4)
             valor=valor+(valor*0.1); 
     }
     printf ("Valor final da compra: R$ %d\n",valor);
}