// Exercicio 10

#include <stdio.h>

int main() {

    float K, M;

    printf("Entre com um valor de velocidade em km/h: ");
    scanf("%f", &K);

    M = K / 3.6;

    printf("A velocidade em m/s e: %f\n", M);

    return 0;

}
