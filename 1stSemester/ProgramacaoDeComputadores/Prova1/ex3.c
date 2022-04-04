#include <stdio.h>

int main() {
  int quantidadeEscolas, quantidadesEleitoresEscola, i, eleitoresTotais = 0, mediaEleitores = 0;

  printf("Quantidade de escolas: ");
  scanf("%i", &quantidadeEscolas);

  for (i = 1; i <= quantidadeEscolas; i++) {
    printf("Eleitores Escola %i: ", i);
    scanf("%i", &quantidadesEleitoresEscola);

    eleitoresTotais = eleitoresTotais + quantidadesEleitoresEscola;
  }

  printf("Este cartorio possui media de %i eleitores por escola.\n", (eleitoresTotais/3));

  return 0;
}
