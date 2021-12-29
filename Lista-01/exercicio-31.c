// Exercicio 31

#include <stdio.h>

int main() {

    int inteiro, antecessor, sucessor;

    printf("Entre com um numero inteiro e receba seu antecessor e sucessor: ");
    scanf("%d", &inteiro);

    antecessor = inteiro - 1;
    sucessor = inteiro + 1;

    printf("O inteiro %d tem como antecessor %d e sucessor como %d\n", inteiro, antecessor, sucessor);

    return 0;

}
