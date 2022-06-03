#include <stdio.h>

int main(void)
{

  int qtdHospitais;

  printf("Entre com a quantidade de hospitais: ");
  scanf("%i", &qtdHospitais);

  int i, soma = 0;
  int qtdLeitos[qtdHospitais];

  for (i = 0; i < qtdHospitais; i++)
  {
    printf("Leitos Disponiveis do hospital %i: ", i + 1);
    scanf("%i", &qtdLeitos[i]);
    soma = soma + qtdLeitos[i];
  }

  int iMaior, iMaior2;

  iMaior = 0;
  iMaior2 = qtdHospitais - 1;

  for (i = 1; i < qtdHospitais; i++)
  {
    if (qtdLeitos[i] > qtdLeitos[iMaior])
    {
      iMaior2 = iMaior;
      iMaior = i;
    }
    else if (qtdLeitos[i] > qtdLeitos[iMaior2] && qtdLeitos[i] != qtdLeitos[iMaior])
    {
      iMaior2 = i;
    }
  }

  printf("Total de leitos disponiveis: %i\n", soma);
  printf("Hospitais com mais leitos disponiveis: %i e %i\n", iMaior + 1, iMaior2 + 1);

  return 0;
}