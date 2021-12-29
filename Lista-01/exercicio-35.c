// Exercicio 35

#include <stdio.h>
#include <math.h>

int main() {

    float a, b, hipotenusa;

    printf("Entre com os valores de a e b para calcular a hipotenusa de um triangulo:\n");
    scanf("%f", &a);
    scanf("%f", &b);

    hipotenusa = sqrt(a * a +  b * b);

    printf("O valor da hipotenusa e de : %.3f\n", hipotenusa);

    return 0;

}
