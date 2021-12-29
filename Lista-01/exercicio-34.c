// Exercicio 34

#include <stdio.h>

int main() {

    float raio, area;
    float const pi = 3.14;

    printf("Entre com o raio de um circulo e o programa calculara sua area: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    
    printf("A area do circulo e de: %.3f\n", area);

    return 0;

}
