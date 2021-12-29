// Exercicio 33

#include <stdio.h>

int main() {

    float lado, area;

    printf("Entre com um lado do quadrado e o programa calculara sua area: ");
    scanf("%f", &lado);

    area = lado * lado;
    
    printf("A area do quadrado e de: %.3f\n", area);

    return 0;

}
