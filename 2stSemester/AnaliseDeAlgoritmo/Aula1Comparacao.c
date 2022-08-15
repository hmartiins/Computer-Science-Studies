#include <stdio.h>

int numeroDeComparacoes(int[], int);

int main()
{
  int i, vetor[6];

  for (i = 0; i <= 5; i++)
  {
    scanf("%d", &vetor[i]);
  }

  printf("\n\n%d", numeroDeComparacoes(vetor, 6));

  return 0;
}

int numeroDeComparacoes(int a[6], int n)
{
  int i, numeroDeComparacoes = 0;
  int x = a[0];

  for (i = 1; i < n; i++)
  {
    if (a[i] < x)
    {
      x = a[i];
    }
    numeroDeComparacoes = numeroDeComparacoes + 1;
  }

  return numeroDeComparacoes;
}
