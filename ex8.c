#include<stdio.h>
float main () {

    float valorm, parcela, total;

    printf("qual e o valor da moto? ");
    scanf("%f", &valorm);

    printf("quantas parcelas quer fazer? ");
    scanf("%f", &parcela);

    total = (valorm/parcela)*0.15;
    printf("o juros da parcela da moto e: %.2f", total);

    return 0;
    }
