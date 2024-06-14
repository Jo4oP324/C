#include<stdio.h>
int main () {

    int media, soma;
    int notas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < 10; i++){
        soma = soma + notas[i];
    }
    media = soma/10;

    printf("%i \n", media);
}
