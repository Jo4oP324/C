#include<stdio.h>
int main () {

    int tipo, tamanho, preco, total;

    printf("digite 1 para expresso, digite 2 para capuccino, digite 3 para latte");
    scanf("%i", &tipo);

     switch(tipo) {
    case 1:
    preco=3;
    break;

     case 2:
    preco=4;
    break;

     case 3:
    preco=5;
    break;
    }

    printf("digite 1 para pequeno, digite 2 para medio, digite 3 para grande");
    scanf("%i", &tamanho);

    switch(tamanho) {

    case 1:
    total=preco*1;
    break;

    case 2:
    total=preco*2;
    break;

    case 3:
    total=preco*3;
    break;
    }

    printf("o total ficou: %d", total);

    return 0;
    }
