// Exercicio 40

#include <stdio.h>

int main() {

    float dias, diariaEnc = 30.00, valorLiq;

    printf("Entre com a quantidade de dias que o encanador trabalhou: ");
    scanf("%f", &dias);

    valorLiq = dias * diariaEnc * 0.92;

    printf("O valor liquido a ser pago e de %.3f\n", valorLiq);

    return 0;

}
