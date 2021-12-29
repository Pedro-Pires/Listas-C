// Exercicio 39

#include <stdio.h>

int main() {

    float primeiro, segundo, terceiro, total = 780000.00;

    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total * (1 - 0.46 - 0.32);

    printf("A quantia repartida foi de:\n");
    printf("%.2f para o primeiro\n", primeiro);
    printf("%.2f para o segundo\n", segundo);
    printf("%.2f para o terceiro\n", terceiro);

    return 0;

}
