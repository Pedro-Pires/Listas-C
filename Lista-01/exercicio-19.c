// Exercicio 19

#include <stdio.h>

int main() {

    float L, M;

    printf("Entre com um valor de medida em litros: ");
    scanf("%f", &L);

    M = L / 1000;

    printf("O valor da medida em volume (m3) e: %f\n", M);

    return 0;

}
