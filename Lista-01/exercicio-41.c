//Exercicio 41

#include <stdio.h>

int main() {

    float valorHora, horasTraba, valor;

    printf("Entre com o valor hora do funcionario: ");
    scanf("%f", &valorHora);

    printf("Entre com o total de horas que ele trabalhou no mes: ");
    scanf("%f", &horasTraba);

    valor = valorHora * horasTraba * 1.10;

    printf("O valor a ser pago pelo funcionario e de : %.2f reais\n", valor);

    return 0;

}
