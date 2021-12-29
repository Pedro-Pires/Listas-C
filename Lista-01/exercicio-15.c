// Exercicio 15

#include <stdio.h>

int main() {

    float R, G;
    float pi = 3.14;

    printf("Entre com um valor de angulo em radianos: ");
    scanf("%f", &R);

    G = R * 180 / pi;

    printf("O valor do angulo em grausE e: %f\n", G);

    return 0;

}
