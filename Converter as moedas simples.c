#include <stdio.h>
int main(){
    float num1,real,dolar=5.14;

    printf("Digite o valor real: ");
    scanf("%f",&real);

    num1 = real/dolar;

    printf("O valor convertido para o dolar: $%.2f ",num1);
}
