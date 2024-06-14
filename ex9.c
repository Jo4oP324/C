#include<stdio.h>
float main ()  {

    float valor, meses, total;

    printf("qual e o valor inicial do investimento? ");
    scanf("%f", &valor);

    printf("quantos meses voce quer investir? ");
    scanf("%f", &meses);

    total=valor*meses*0.10;
    printf("o investimento foi de: %.2f", total);

    return 0;
    }
