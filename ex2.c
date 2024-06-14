#include<stdio.h>
int main ()  {

    int lados, poligono;

    printf("quantos lados tem o poligono");
    scanf("%i", &lados);

    switch (lados) {
    case 3:
        printf("triangulo \n %i", lados);
    break;

    case 4:
        printf ("quadrado \n %i", lados);
    break;

    case 5:
        printf ("pentagono \n %i", lados);
    break;

    case 6:
        printf ("hexagono \n %i", lados);
    break;

    default:
    printf("poligono invalido!\n");

    }

        return 0;
}
