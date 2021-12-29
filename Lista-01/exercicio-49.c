// Exercicio 49

#include <stdio.h>

int main() {

    int hor, min, sec, resto, tempo; // Dados do problema
    int horE, minE, secE, restoE; // Dados para entrada de horario
    int horS, minS, secS, restoS, secTotal; // Dados para saida de horario

    printf("Entre com o horario de inicio do experimento:\n\n");

    printf("Quantidade de horas: ");
    scanf("%d", &hor);

    printf("Quantidade de min: ");
    scanf("%d", &min);

    printf("Quantidade de sec: ");
    scanf("%d", &sec);

    printf("\nEntre com o tempo de duracao do experimento em segundos: ");
    scanf("%d", &tempo);

    hor = hor * 3600; // Converte em segundos
    min = min * 60; // Converte em segundos
    sec = hor + min + sec; // Transforma o horario do inicio do experimento em segundos.

    // Conversores para horario de inicio do experimento

    horE = sec / 3600;
    restoE = (sec % 3600);
    minE =  restoE / 60;
    secE = restoE % 60;

    // Conversores para horario de saida do experimento

    secTotal = sec + tempo;
    secTotal = secTotal % 86400; // Caso ultrapasse de 00:00:00

    horS = secTotal / 3600;
    restoS = (secTotal % 3600);
    minS =  restoS / 60;
    secS = restoS % 60;

    printf("O horario inicial foi de: %d:%d:%d horas\n", horE, minE, secE);
    printf("O horario de termino do experimento foi de: %d:%d:%d horas\n", horS, minS, secS);

    return 0;

}
