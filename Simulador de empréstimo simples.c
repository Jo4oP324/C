#include <stdio.h>
int main(){
    float emprestimo,taxa=0.07,meses, resul;

    printf("Digite o valor do seu emprestimo: ");
    scanf("%f", &emprestimo);

    printf("Digite o prazo de no maximo 36 meses: ");
    scanf("%f", &meses);

    if(emprestimo>=100 && emprestimo<=10000 && meses > 0 && meses <= 36){
        resul = emprestimo*(1+taxa*meses)/meses;
        printf("O valor da parcela e de: %.2f \n",resul);
        printf("O valor do seu emprestimo total ficara em: %.2f",resul*meses);
    }
    else{
        printf("Valor incorreto");
    }

}
