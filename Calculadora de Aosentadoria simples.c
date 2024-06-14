#include <stdio.h>
int main() {
    int idadeatual, idadeaposentadoria, anosfaltantes;
    char genero;

    printf("Digite sua idade atual: ");
    scanf("%d", &idadeatual);

    printf("m(mulher) h(homem) \n digite seu genero: ");
    scanf(" %c", &genero);

    switch (genero){

        case 'm': {
            idadeaposentadoria = 62;
            break;
        }

        case 'h': {
            idadeaposentadoria = 65;
            break;
        }
    }

    if (idadeaposentadoria > idadeatual) {
        anosfaltantes = idadeaposentadoria - idadeatual;
        printf("Faltam %d anos para sua aposentadoria.\n", anosfaltantes);
    } else {
        printf("Erro: A idade de aposentadoria deve ser maior que a idade atual.\n");
    }

    return 0;
}
