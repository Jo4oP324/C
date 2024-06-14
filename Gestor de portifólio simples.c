#include <stdio.h>
int main(){
    int incial,atual;

    printf("Digite o seu valor do investimento inicial: ");
    scanf("%d",&incial);
    printf("Digite o seu valor atual: ");
    scanf("%d",&atual);

    if(atual>=incial){
        printf("Voce tera lucro ");
    }
    else{
        printf("Voce tera prejuizo ");
    }

}
