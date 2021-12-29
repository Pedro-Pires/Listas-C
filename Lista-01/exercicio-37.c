// Exercicio 37

#include <stdio.h>

int main() {

    float valor, desconto;

    printf("Entre com um valor para saber seu desconto em 12 por cento: ");
    scanf("%f", &valor);

    desconto = 0.88 * valor;

    printf("O valor do produto com um desconto de 12 por cento e de %.3f\n", desconto);

    return 0;

}
