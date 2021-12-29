// Exercicio 44

#include <stdio.h>

int main() {

    int altura, usuario, total;

    printf("Entre com a altura da escada e quantos degraus o usuario deseja subir: ");
    scanf("%d %d", &altura, &usuario);
    
    total = altura - usuario;

    printf("O usuario deverar andar %d degraus para alcancar seu objetivo\n", total);

    return 0;

}
