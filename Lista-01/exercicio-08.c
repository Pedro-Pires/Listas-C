// Exercicio 08

#include <stdio.h>

int main() {

    float K, C;

    printf("Entre com um valor de temperatura em graus Kelvin: ");
    scanf("%f", &K);

    C = K - 273.15;

    printf("A temperatura em graus Celsius e: %f\n", C);

    return 0;

}
