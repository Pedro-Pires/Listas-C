// Exercicio 29

#include <stdio.h>

int main() {

    int nota1, nota2, nota3, nota4, soma;
    float media;

    printf("Entre com quatro notas:\n");
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);
    scanf("%d", &nota4);

    soma = nota1 + nota2 + nota3 + nota4;
    media = (float) soma / 4.0;

    printf("A media das notas e %.2f\n", media);

    return 0;

}
