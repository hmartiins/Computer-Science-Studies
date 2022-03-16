#include <stdio.h>

int main() {

    int valorInteiro, valorDecimal;
    int quantidadeNotas, quantidadeMoedas;

    scanf("%i.%i", &valorInteiro, &valorDecimal);
    quantidadeNotas = valorInteiro/ 100;
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", quantidadeNotas);

    valorInteiro = valorInteiro- (quantidadeNotas * 100);
    quantidadeNotas = valorInteiro/ 50;
    printf("%i nota(s) de R$ 50.00\n", quantidadeNotas);

    valorInteiro= valorInteiro- (quantidadeNotas * 50);
    quantidadeNotas = valorInteiro/ 20;
    printf("%i nota(s) de R$ 20.00\n", quantidadeNotas);

    valorInteiro= valorInteiro- (quantidadeNotas * 20);
    quantidadeNotas = valorInteiro/ 10;
    printf("%i nota(s) de R$ 10.00\n", quantidadeNotas);

    valorInteiro= valorInteiro- (quantidadeNotas * 10);
    quantidadeNotas = valorInteiro/ 5;
    printf("%i nota(s) de R$ 5.00\n", quantidadeNotas);

    valorInteiro= valorInteiro- (quantidadeNotas * 5);
    quantidadeNotas = valorInteiro/ 2;
    printf("%i nota(s) de R$ 2.00\n", quantidadeNotas);

    printf("MOEDAS:\n");
    valorInteiro = valorInteiro- (quantidadeNotas * 2);
    printf("%i moeda(s) de R$ 1.00\n", valorInteiro);

    quantidadeMoedas = valorDecimal / 50;
    printf("%i moeda(s) de R$ 0.50\n", quantidadeMoedas);

    valorDecimal = valorDecimal - (quantidadeMoedas * 50);
    quantidadeMoedas = valorDecimal / 25;
    printf("%i moeda(s) de R$ 0.25\n", quantidadeMoedas);

    valorDecimal = valorDecimal - (quantidadeMoedas * 25);
    quantidadeMoedas = valorDecimal / 10;
    printf("%i moeda(s) de R$ 0.10\n", quantidadeMoedas);

    valorDecimal = valorDecimal - (quantidadeMoedas * 10);
    quantidadeMoedas = valorDecimal / 5;
    printf("%i moeda(s) de R$ 0.05\n", quantidadeMoedas);

    valorDecimal = valorDecimal - (quantidadeMoedas * 5);
    printf("%i moeda(s) de R$ 0.01\n", valorDecimal);

    return 0;

}
