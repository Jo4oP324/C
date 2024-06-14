#include <stdio.h>
int main(){
    int dia,num1;
    do{
    printf("Listas de livros: \n");
    printf("[1] O codigo da inteligencia \n");
    printf("[2] Um diario de um banana \n");
    printf("[3] A volta ao mundo aos 80 dias \n");
    scanf("%d",&num1);

    if(num1==num1){
        printf("Voce escolheu o livro \n",num1);
    }
    else{
        printf("Nao possui livro que vc queria");
    }
    switch(dia){
    case 1:
        printf("Dia devolucao");
        break;
    case 2:
        printf("Seu Cpf");
        }
    printf("Voce vai devolver no dia 7 \n");
    }while(dia==num1);

}
