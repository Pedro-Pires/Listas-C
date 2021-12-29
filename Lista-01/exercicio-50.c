// Exercicio 50

// Neste exercicio foi considerado apenas o ano, e nao o mes de aniversario.

int main() {

    int idade, ano, nascimento;

    printf("Insira a sua idade e depois, o ano atual: ");
    scanf("%d %d", &idade, &ano);

    nascimento = ano - idade;

    printf("Sua data de nascimento e de %d\n", nascimento);

   return 0;

}
