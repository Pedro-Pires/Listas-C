// Exercicio 53

#include <stdio.h>

int main() {

    float comprimento, largura, precoMetro, custo, tamanhoTerreno;

    printf("Entre com o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Entre com a largura do terreno: ");
    scanf("%f", &largura);

    printf("Entre com o preco do metro da tela: ");
    scanf("%f", &precoMetro);

    tamanhoTerreno = 2 * comprimento + 2 * largura;

    custo = precoMetro * tamanhoTerreno;

    printf("\nO preco total para o preenchimento do terreno sera de %.2f\n", custo);

    return 0;
    
}
