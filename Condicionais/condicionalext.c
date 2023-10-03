void main (){
    int v1,v2,v3,v4;
    int m1,m2,m3; 
    int maior=-1;
    printf ("Informe o primeiro valor:")
    scanf ("%d", &v1);
    printf ("Informe o segundo valor:")
    scanf ("%d", &v2);
    printf ("Informe o terceiro valor:")
    scanf ("%d", &v3);
    printf ("Informe o quarto valor:")
    scanf ("%d", &v4);

    if (v1>maior){
        maior=v1;
        if(v2>maior){
            maior=v2;
        }
        else if(v3>maior){
            maior=v3;
        }
        else if (v4>maior){
            maior=v4;
        }
    }
}