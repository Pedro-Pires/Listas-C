// Exercicio 07

#include <stdio.h>

int main() {

    float F, C;

    printf("Entre com um valor de temperatura em graus Fahrenheit: ");
    scanf("%f", &F);

    C = 5.0 * (F - 32.0) / 9.0;

    printf("A temperatura em graus Celsius e: %f\n", C);

    return 0;

}
