#include <stdio.h>

int retornaMaiorNumero(int[], int *);

int main()
{
  int i, numeroComparacoes = 6, vetor[numeroComparacoes];

  for (i = 0; i <= 5; i++)
  {
    scanf("%d", &vetor[i]);
  }

  printf("\nMaior numero: %d\n", retornaMaiorNumero(vetor, &numeroComparacoes));
  printf("Numero de comparacoes: %d\n", numeroComparacoes);

  return 0;
}

int retornaMaiorNumero(int a[6], int *n)
{
  int i, numeroDeComparacoes = 0;
  int x = a[0];

  for (i = 1; i < *n; i++)
  {
    if (a[i] > x)
    {
      x = a[i];
    }
    numeroDeComparacoes = numeroDeComparacoes + 1;
  }

  *n = numeroDeComparacoes;

  return x;
}
