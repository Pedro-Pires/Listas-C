// Exercicio 28

#include <stdio.h>

int main() {

    int valor1, valor2, valor3, soma;

    printf("Entre com tres valores inteiros para que seja efetuada sua soma ao quadrado:\n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    scanf("%d", &valor3);

    soma = valor1 * valor1 + valor2 * valor2 + valor3 * valor3;

    printf("A soma do quadrado dos tres numeros resultou em: %d\n", soma);

    return 0;

}
