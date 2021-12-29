// Exercicio 17

#include <stdio.h>

int main() {

    float C, P;

    printf("Entre com um valor de medida em centimetros: ");
    scanf("%f", &C);

    P = C / 2.54;

    printf("O valor da medida em polegadas e: %f\n", P);

    return 0;

}
