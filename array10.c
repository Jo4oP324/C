#include<stdio.h>
int main () {

    float soma, media;
    float temperatura[7] = {27.5, 28, 29.7, 31.7, 25.3, 19, 16.3};

     for(int f = 0; f < 10; f++){
        soma = soma + temperatura[f];
    }
    media = soma/7;

    printf("%f \n", media);


}
