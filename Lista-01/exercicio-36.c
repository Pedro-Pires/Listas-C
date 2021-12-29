// Exercicio 36

#include <stdio.h>

int main() {

    float vol, raio, alt;
    float const pi = 3.14;

    printf(" Entre a altura e o raio para calcular o volume de um cilindro:\n");

    printf("Altura: ");
    scanf("%f", &alt);
    
    printf("Raio: ");
    scanf("%f", &raio);

    vol = pi * raio * raio * alt;

    printf("O valor do volume aproximado e de: %.3f\n", vol);

    return 0;

}
