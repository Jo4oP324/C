#include<stdio.h>
float main () {

    float sbruto, sliquido, inss, total;

    printf("qual e seu salario bruto? ");
    scanf("%f", &sbruto);

    if(sbruto<1903.98) {
    printf("voce esta isento do imposto de renda");
    }

    else if(sbruto>1903.99 && sbruto<2826.65){
    sliquido = sbruto * 0.075;
    }

    else if(sbruto>2826.66 && sbruto<3751.05){
    sliquido = sbruto * 0.15;
    }


    else if(sbruto>3751.06 && sbruto<4664.68){
    sliquido = sbruto*0.225;
    }

    else if(sbruto>4664.69) {
    sliquido = sbruto*0.275;
    }

   //INSS

   if(sbruto<1100) {
   printf("voce esta isento");
   }

    else if(sbruto>1100.1 && sbruto<2203.48){
    inss = sbruto * 0.09;
    }

    else if(sbruto>2203.49 && sbruto<3305.22){
    inss = sbruto*0.12;
    }

    else if(sbruto>3305.22 && sbruto<6433.57){
    inss = sbruto*0.14;
    }

    total = sbruto-(sliquido+inss);
    printf("o desconto do salario e: %.2f", total);

     return 0;
}
