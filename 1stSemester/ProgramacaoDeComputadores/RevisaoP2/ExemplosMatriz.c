#include <stdio.h>

int main()
{
  int l, c;

  printf("Quantidade de linhas: ");
  scanf("%i", &l);

  printf("Quantidade de colunas: ");
  scanf("%i", &c);

  int matriz[l][c], i, j;

  for (i = 0; i < l; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("M[%i][%i]= ", i, j);
      scanf("%i", &matriz[i][j]);
    }
  }

  printf("\n");

  for (i = 0; i < l; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("%i ", matriz[i][j]);
    }

    printf("\n");
  }

  char nomes[2][30];

  for (i = 0; i < 2; i++)
  {
    fflush(stdin);
    scanf("%30[^\n]", nomes[i]);
  }

  for (i = 0; i < 2; i++)
  {
    puts(nomes[i]);
    printf("Inicial: %c\n", nomes[i][0]);
  }

  return 0;
}