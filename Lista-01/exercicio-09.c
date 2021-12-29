// Exercicio 09

#include <stdio.h>

int main() {

    float K, C;

    printf("Entre com um valor de temperatura em graus Celsius: ");
    scanf("%f", &C);

    K = C + 273.15;

    printf("A temperatura em graus Kelvin e: %f\n", K);

    return 0;

}
