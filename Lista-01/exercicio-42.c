// Exercicio 42

#include <stdio.h>

int main() {

    float salario;

    printf("Entre com o salario base do funcionario: ");
    scanf("%f", &salario);

    salario = salario * 0.98;

    printf("O salario liquido do funcionario sera de %.2f\n", salario);

    return 0;

}
