#include <stdio.h>
int main(){
    float imposto,taxa=0.15,renda;

    printf("Digite a sua renda: ");
    scanf("%f",&renda);

    imposto=renda*taxa;

    printf("O valor do imposto e de: %.2f",imposto);
}
