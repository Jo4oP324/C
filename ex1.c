#include <stdio.h>
int main() {
    int num1, num2, resultado;
    char operacao;

  printf("digite numero");
  scanf("%i", &num1);

  printf("digite numero");
  scanf("%i", &num2);

  printf("Digite a operacao desejada (+, -, *, /):  ");
  scanf(" %c", &operacao);
  switch (operacao) {
    case '+':
      resultado= num1+num2;
      printf("soma\n %d", resultado) ;
      // Implementar c�digo para pegar os n�meros e somar
      break;
    case '-':
       resultado= num1-num2;
       printf("subtracao\n %d", resultado) ;
      // Implementar c�digo para pegar os n�meros e subtrair
      break;
    case '*':
       resultado= num1*num2;
       printf("multiplicacao\n %d", resultado) ;
      // Implementar c�digo para pegar os n�meros e multiplicar
      break;
    case '/':
      resultado= num1/num2;
      printf("divisao\n %d", resultado) ;
      // Implementar c�digo para pegar os n�meros e dividir (verificar divis�o por zero)
      break;
    default:
      printf("Operacao invalida!\n");
  }
  return 0;
}
