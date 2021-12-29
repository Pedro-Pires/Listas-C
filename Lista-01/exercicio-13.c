// Exercicio 13

#include <stdio.h>

int main() {

    float K, M;

    printf("Entre com um valor de velocidade em km/h: ");
    scanf("%f", &K);

    M = K / 1.61;
    
    printf("A velocidade em milhas e: %f", M);

    return 0;

}
