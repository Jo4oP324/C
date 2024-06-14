#include <stdio.h>

int main() {
    int numero[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float soma = 0;
    for (int i = 0; i < 10; i++){
        soma += numero[i];
    }
    printf("A media dos numeros e: %.2f\n", soma / 10);
    return 0;
}

