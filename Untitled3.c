#include <stdio.h>
int main(){
    int lados;
    char continua;
    do{
    printf("Digite quando lados tem: \n");
    scanf("%d",&lados);
    switch (lados) {
        case 3:
            printf("Triangulo \n");
            break;
        case 4:
            printf("Quadrado \n");
            break;
        case 5:
            printf("Pentagono \n");
            break;
        case 6:
            printf("Hexagono \n");
            break;
        case 7:
            printf("Poligono qualquer \n");
            break;
    default:
        printf("Figura geometrica invalida \n");
    }
    printf("\n continua (s/n): ",&continua);
    scanf("%c", &continua);
  } while (continua == 's' || continua == 'S');

}
