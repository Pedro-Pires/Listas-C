// Exercicio 38

#include <stdio.h>

int main() {

    float antigo, novo;

    printf("Entre com o salario antigo do funcionario para saber o seu novo com um aumento de 25 por cento: ");
    scanf("%f", &antigo);

    novo = 1.25 * antigo;

    printf("O novo salario do funcionario e de %.3f", novo);

    return 0;

}
