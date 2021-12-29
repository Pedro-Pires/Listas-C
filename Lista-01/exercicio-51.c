// Exercicio 51

#include <stdio.h>
#include <math.h>

int main() {

    float x, y, distancia;

    printf("Entre com x e y: ");
    scanf("%f %f", &x, &y);

    distancia = sqrt(pow(x, 2.0) + pow(y, 2.0));

    printf("A distancia ate a origem e: %.5f\n", distancia);

    return 0;

}