#include<stdio.h>
int main () {

    int vi, va, total;

    printf("qual e o valor inicial do investimento?  ");
    scanf("%i", &vi);

    printf("qual e o valor atual do investimento? ");
    scanf("%i", &va);

    if (vi>va) {
    printf("voce teve prejuizo");
    }

    else if(vi<va) {
    printf("voce teve lucro");
    }
    return 0;
}
