// Exercicio 46

#include <stdio.h>

int main() {

    int numero, centena, dezena, unidade;

    printf("Entre com um numero positivo inteiro de tres digitos e sera retornado o contrario: ");
    scanf("%d", &numero);

    unidade = numero % 10;
    centena = numero / 100;
    dezena = numero % 100 / 10;

    printf("O numero inverso e: %d%d%d\n", unidade, dezena, centena);

    return 0;

}
