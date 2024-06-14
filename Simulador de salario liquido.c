#include <stdio.h>
int main(){
    float bruto, liquido;

    printf("Digite seu salario bruto: ");
    scanf("%f", &bruto);

    if(bruto <= 1903.98){
        liquido = bruto - (bruto * 0.09);
        printf("o salario liquido e %f", liquido);

    }
    else if(bruto >= 1903.99 && bruto <= 2826.65){
        liquido = bruto - (bruto * 0.075) - (liquido * 0.09);
        printf("o salario liquido e %f", liquido);

    }
    else if(bruto >= 2826.66 && bruto <=3751.05){
        liquido = bruto - (bruto * 0.12) - (liquido * 0.14);
        printf("o salario liquido e %f", liquido);
    }
    else if(bruto >= 3751.06 && bruto <=4664.68){
        liquido = bruto - (bruto * 0.15) - (liquido * 0.225);
        printf("o salario liquido e %f", liquido);
    }
    else if(bruto >= 4664.69 && bruto <=6433.57){
        liquido = bruto - (bruto * 0.275);
        printf("o salario liquido e %f", liquido);
    }
    else if(bruto >= 6433.58){
        liquido = bruto - (bruto * 0.275);
        printf("o salario liquido e %f", liquido);
    }


}
