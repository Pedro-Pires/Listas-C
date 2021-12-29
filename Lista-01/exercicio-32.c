// Exercicio 32

#include <stdio.h>

int main() {

    int inteiro, antecessor, sucessor, soma;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &inteiro);

    antecessor = inteiro - 1;
    sucessor = inteiro + 1;
    soma = sucessor * 3 + antecessor * 2;

    printf("A resposta final e : %d\n", soma);

    return 0;

}
