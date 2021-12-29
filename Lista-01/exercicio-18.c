// Exercicio 18

#include <stdio.h>

int main() {

    float L, M;

    printf("Entre com um valor de medida em volume (m3): ");
    scanf("%f", &M);

    L = 1000 * M;

    printf("O valor da medida em litros e: %f\n", L);

    return 0;

}
