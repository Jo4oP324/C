#include <stdio.h>
int main(){
    int anos;
    float taxa=0.05,num1,investimento;

    printf("Digite o valor do seu investimento: ");
    scanf("%f", &investimento);
    printf("Digite o numero de ano: ");
    scanf("%d", &anos);

    num1=investimento+(investimento*taxa*anos);

    printf("O juros simples que voce obteve em %d anos e de: %.2f", anos, num1);

}
