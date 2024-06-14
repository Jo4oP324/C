#include <stdio.h>

int main() {
    int numero[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int menor = numero[0];


    for (int i = 1; i < 10; i++){
        if (numero[i] < menor){
            menor = numero[i];
        }
    }
    printf("O menor numero e: %d\n", menor);

    return 0;

}
