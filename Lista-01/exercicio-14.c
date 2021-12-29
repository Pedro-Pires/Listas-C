// Exercicio 14

#include <stdio.h>

int main() {

    float R, G;
    float pi = 3.14;

    printf("Entre com um valor de angulo em graus: ");
    scanf("%f", &G);

    R = G * pi / 180;

    printf("O valor do angulo em radianos e: %f\n", R);

    return 0;

}
