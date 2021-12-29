// Exercicio 20

#include <stdio.h>

int main() {

    float L, K;

    printf("Entre com um valor de massa (kg): ");
    scanf("%f", &K);

    L = K / 0.45;
    
    printf("O valor da medida em libras e: %f\n", L);

    return 0;

}
