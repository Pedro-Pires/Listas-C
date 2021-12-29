// Exercicio 52

#include <stdio.h>

int main() {

    float invest, valorPremio, premioAmigo1, premioAmigo2, premioAmigo3;
    float amigo1, amigo2, amigo3;

    printf("Entre com o valor do premio: ");
    scanf("%f", &valorPremio);

    printf("\nEntre com o valor apostado do amigo1: ");
    scanf("%f", &amigo1);

    printf("\nEntre com o valor apostado do amigo2: ");
    scanf("%f", &amigo2);

    printf("\nEntre com o valor apostado do amigo3: ");
    scanf("%f", &amigo3);

    invest = amigo1 + amigo2 + amigo3; // valor total do investimento

    // Valor do Premio distribuido em funcao da % do investimento de cada amigo separado

    premioAmigo1 = valorPremio * (amigo1 / invest);
    premioAmigo2 = valorPremio * (amigo2 / invest);
    premioAmigo3 = valorPremio * (amigo3 / invest);

    printf("\nO amigo 1 recebera %.2f\n", premioAmigo1);
    printf("O amigo 2 recebera %.2f\n", premioAmigo2);
    printf("O amigo 3 recebera %.2f\n", premioAmigo3);
     
    return 0;
    
}
