// Exercicio 30

#include <stdio.h>

int main() {

   float real, dolar, cotacao;

   printf("Entre com a quantidade de reais e a cotacao do dolar\n");

   printf("Real: ");
   scanf("%f", &real);

   printf("Cotacao: ");
   scanf("%f", &cotacao);

   dolar = real / cotacao;

   printf("O valor de %.3f reais equivale a %.3f dolares\n", real, dolar);

   return 0;

}
