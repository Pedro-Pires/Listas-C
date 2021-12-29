//Exercicio 47

#include <stdio.h>

int main() {

    int numero, unidade, dezena, centena, milhar;

    printf("Entre com um numero com quatro casas: ");
    scanf("%d", &numero);

    unidade = numero % 10;
    dezena = numero / 10 % 10;
    centena = numero / 100 % 10;
    milhar = numero / 1000;

    printf("O numero ao contrario e %d%d%d%d\n", unidade, dezena, centena, milhar);

    return 0;

}
