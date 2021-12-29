// Exercicio 27

#include <stdio.h>

int main() {

    float H, M;

    printf("Entre com um valor de area em hectares ");
    scanf("%f", &H);

    M = H * 10000;

    printf("O valor da area em metros quadrados e %f\n", M);

    return 0;

}
