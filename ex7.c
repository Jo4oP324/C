#include<stdio.h>
float main () {

    float vanual, imposto;

    printf("qual e sua renda anual? ");
    scanf("%f", &vanual);

    imposto = vanual*0.15;

    printf("seu imposto e: %.2f", imposto);

    return 0;
    }
