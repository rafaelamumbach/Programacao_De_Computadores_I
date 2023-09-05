//C00600 - Faça um algoritmo que leia 3 notas de um aluno e escreva sua média harmônica (MH). Caso alguma das notas seja 0 (zero),
//MH deve receber 0 (zero). Se o aluno obteve uma MH abaixo de 6.0, E SOMENTE NESSE CASO, o algoritmo deve ler uma quarta nota
//(da prova de recuperação) e substitua a menor das três notas pela nota da recuperação, recalculando MH. O algoritmo deve escrever
//a MH final e o conceito obtido (0, se MH < 6.0; 1 se 6.0 <= MH <7.0; 2 se 7.0 <= MH < 8.0; 3 se 8.0 <= MH < 9.0; 4 se MH>=9.0).
//Dica: A média harmônica entre três valores N1, N2 e N3 é calculada pela expressão 3/(1/N1+1/N2+1/N3).
//algoritmo "C001_C00000600"
// Autor : rmbuenos
// Data : 05/09/2023
#include <stdio.h>

void main(){
    float nota1, nota2, nota3, media_harmonica, rec;
    printf("Informe a nota 1: ");
    scanf("%f", &nota1);
    printf("Informe a nota 2: ");
    scanf("%f", &nota2);
    printf("Informe a nota 3: ");
    scanf("%f", &nota3);

    if (nota1 == 0 || nota2 == 0 || nota3 == 0){
        media_harmonica = 0;
    } else {
        media_harmonica = 3 / (1/ nota1 + 1/ nota2 + 1/ nota3);
    }

    if (media_harmonica < 6){
        printf("Sua media harmonica final foi menor que 6!\nPor favor, informe a nota da recuperacao: \n");
        scanf("%f", &rec);

        float menor_nota = nota1;
        
        if (nota2 < menor_nota && nota2 != 0){
        menor_nota = nota2;
        }
        
        if (nota3 < menor_nota && nota3 != 0){
            menor_nota = nota3;
        }


        if (rec > menor_nota){
            media_harmonica = (media_harmonica - menor_nota + rec) / 3;
        }  
    }

    int conceito_obtido;

    if (media_harmonica < 6){
        conceito_obtido = 0;

    } else if (media_harmonica < 7) {
        conceito_obtido = 1;

    } else if (media_harmonica < 8) {
        conceito_obtido = 2;

    } else if (media_harmonica < 9) {
        conceito_obtido = 3;

    } else {
        conceito_obtido = 4;
    }
    
    printf("\nMedia harmonica: %.2f\n", media_harmonica);
    printf("Conceito obtido: %d\n", conceito_obtido);
}