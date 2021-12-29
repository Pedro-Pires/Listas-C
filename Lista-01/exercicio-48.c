// Exercicio 48

#include <stdio.h>

int main() {

    int numero, hora, restoHora, min, sec;

    printf("Entre com um valor em segundos: ");
    scanf("%d", &numero);

    hora = numero / 3600; // a parte inteira sao a quantidade de horas.
    restoHora = numero % 3600; // o resto serao em segundos.
    min = restoHora / 60; // divide o resto por 60 resulta nos minutos.
    sec = restoHora % 60; // o resto do resto em horas sao os segundos.

    printf("Horas: %d minutos: %d segundos %d\n", hora, min, sec);

    return 0;

}
