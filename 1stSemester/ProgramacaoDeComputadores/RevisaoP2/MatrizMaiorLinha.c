#include <stdio.h>
#include <time.h>

int main()
{
  int i, j;
  int v[10][10];

  srand(time(NULL));

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      v[i][j] = rand() % 100;
      printf("%3d ", v[i][j]);
    }

    printf("\n");
  }

  int maior[10];

  for (i = 0; i < 10; i++)
  {
    maior[i] = v[i][0];
  }

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      if (maior[i] < v[i][j])
      {
        maior[i] = v[i][j];
      }
    }
  }

  for (i = 0; i < 10; i++)
  {
    printf("\nMaior %d: %d", i, maior[i]);
  }

  printf("\n");

  return 0;
}