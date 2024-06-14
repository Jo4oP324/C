#include <stdio.h>
int main(){
    int valor,num;
    float parcelas,taxa=0.02;

    printf("Digite o valor da moto: ");
    scanf("%f",&valor);
    printf("Digite quandos parcelas para moto: ");
    scanf("%f",&parcelas);

    parcelas=(valor/parcelas)*(1+taxa);

    printf("O valor da moto em parcelas e de: %.2f",parcelas);



}
