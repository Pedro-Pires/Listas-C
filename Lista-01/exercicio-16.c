// Exercicio 16

#include <stdio.h>

int main() {

    float C, P;

    printf("Entre com um valor de medida em polegadas: ");
    scanf("%f", &P);

    C = P * 2.54;

    printf("O valor da medida em centimetros e: %f\n", C);

    return 0;

}
