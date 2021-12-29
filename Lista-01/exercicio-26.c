// Exercicio 26

#include <stdio.h>

int main() {

    float H, M;

    printf("Entre com um valor de area em metros quadrados ");
    scanf("%f", &M);

    H = M * 0.0001;

    printf("O valor da area em hectares e %f\n", H);

    return 0;

}
