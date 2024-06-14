#include <stdio.h>

int main() {
    char palavra1[100];
    char palavra2[100];

    printf("Digite a primeira palavra: ");// Solicita ao usuário a inserção de duas palavras
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0';// Remove o caractere de nova linha (\n) do final da string

    printf("Digite a segunda palavra: "); // Solicita ao usuário a inserção de duas palavras
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0';


    size_t tamanho_palavra1 = strlen(palavra1);// Calcula o tamanho de cada palavra
    size_t tamanho_palavra2 = strlen(palavra2);

    if (tamanho_palavra1 == tamanho_palavra2) {// Verifica se as palavras têm o mesmo tamanho
        printf("As palavras tem o mesmo tamanho.\n");
    } else {
        printf("As palavras nao tem o mesmo tamanho.\n");
    }

    return 0;
}
