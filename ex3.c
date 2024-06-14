#include<stdio.h>
int main () {

    int usuario, limite, livro;

    printf("digite '1' para aluno, digite '2' para professor, digite '3' para pesquisador, digite '4' para pesquisador");
    scanf("%i", &usuario);

    switch (usuario) {

    case 1:
        limite=3;
        printf("quantos livros voce deseja emprestar");
        scanf("%i", &livro);

            if(livro<=3) {
        printf("acesso permitido"); }
        else {
        printf("acesso negado");
        }

    break;

    case 2:
        limite=5;
         printf("quantos livros voce deseja emprestar");
        scanf("%i", &livro);

            if(livro<=5) {
        printf("acesso permitido"); }
        else {
        printf("acesso negado");
        }
    break;

    case 3:
        limite=10;
         printf("quantos livros voce deseja emprestar");
        scanf("%i", &livro);

            if(livro<=10) {
        printf("acesso permitido"); }
        else {
        printf("acesso negado");
        }
    break;

    case 4:
        limite=1;
         printf("quantos livros voce deseja emprestar");
        scanf("%i", &livro);

            if(livro=1) {
        printf("acesso permitido"); }
        else {
        printf("acesso negado");
        }
    break;
    }
    return 0;
    }
