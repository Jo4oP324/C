#include <stdio.h>
int main(){
    float invest,taxa=0.10,meses,num1;

    printf("Digite o valor investido no Bitcoin: ");
    scanf("%f",&invest);

    printf("Digite quantos meses de investimento: ");
    scanf("%f",&meses);

    num1 = invest*taxa*meses;

    printf("O valor final do investimento e: %.2f",num1);
}
