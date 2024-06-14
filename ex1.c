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
      // Implementar código para pegar os números e somar
      break;
    case '-':
       resultado= num1-num2;
       printf("subtracao\n %d", resultado) ;
      // Implementar código para pegar os números e subtrair
      break;
    case '*':
       resultado= num1*num2;
       printf("multiplicacao\n %d", resultado) ;
      // Implementar código para pegar os números e multiplicar
      break;
    case '/':
      resultado= num1/num2;
      printf("divisao\n %d", resultado) ;
      // Implementar código para pegar os números e dividir (verificar divisão por zero)
      break;
    default:
      printf("Operacao invalida!\n");
  }
  return 0;
}
