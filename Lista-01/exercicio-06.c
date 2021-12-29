// Exercicio 06

#include <stdio.h>

int main() {

    float F, C;

    printf("Entre com um valor de temperatura em graus Celsius: ");
    scanf("%f", &C);

    F = C * (9.0 / 5.0) + 32.0;
    
    printf("A temperatura em graus Fahrenheit e: %f\n", F);

    return 0;

}

