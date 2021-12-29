// Exercicio 43

int main() {

    float valor, desconto10, parcela, comissaoVist, comissaoParc;

    printf("Entre com o valor pago pelo cliente para saber as informacoes de negocio: ");
    scanf("%f", &valor);

    desconto10 = valor * 0.9;

    printf("O valor total a ser pago com um desconto de 10 por cento sera de: %.2f\n", desconto10);

    parcela = valor / 3.0;

    printf("O valor parcelado em 3 vezes a ser pago e de: %.2f\n", parcela);

    comissaoVist = desconto10 * 0.05;

    printf("A comissao a vista sera de: %.2f\n", comissaoVist);

    comissaoParc = valor * 0.05;

    printf("A comissao por venda a parcelamento sera de: %.2f\n", comissaoParc);

    return 0;

}
