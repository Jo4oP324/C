#include <stdio.h>
int main(){
    char operacao,continua;
    float num1,num2,num3;


    do{
        printf("Digite o primeiro numero: ");
        scanf("%f",&num1);
        printf("Digite o segundo numero: ");
        scanf("%f",&num2);
        printf("Digits a operacao desejada (+,-,*,/): ");
        scanf(" %c", &operacao);

    switch (operacao){
        case '+':
            printf("Soma\n");
            num3 = num1 + num2;
        break;
        case '-':
            printf("Subtracao\n");
            num3 = num1 - num2;
        break;
        case '*':
            printf("Multiplicacao\n");
            num3 = num1 * num2;
        break;
        case '/':
            printf("Divisao\n");
            num3 = num1 / num2;
        break;
    default:
        printf("Operacao invalida!\n");
    }
        printf("Valor final: %.6f", num3);
        printf("\n continua (s/n): ",&continua);
    scanf(" %c", &continua);
  } while (continua == 's' || continua == 'S');


}
