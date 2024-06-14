#include<stdio.h>
float main () {

    float valor, formapag, desconto, parcela, total;

    printf("qual e o valor da compra? ");
    scanf("%f", &valor);

    printf("digite '1' para pagar a vista, digite '2' para pagar parcelado ");
    scanf("%f", &formapag);

    if (formapag == 1) {
    desconto=valor*0.10;
    printf("seu desconto foi de: %.2f", desconto);
    }

    else if (formapag == 2) {
    printf("quantas vezes voce quer parcelar? ");
    scanf("%f", &parcela);

    if (parcela>10) {
    printf("programa finalizado");
    }

    total=valor*parcela*0.05;
    printf("a taxa da parcela foi de: %.2f", total);

    }
    return 0;
}
