#include <stdio.h>
#include <string.h>

int main(void)
{

  char nome[30];
  char *nomef;
  char pnome[15];

  int espacos = 0;

  scanf("%30[^\n]", &nome);

  int i;

  for (i = 0; i < strlen(nome); i++)
  {
    if (nome[i] == 32)
    {
      espacos++;
    }
  }

  nomef = strtok(nome, " ");

  strcpy(pnome, nomef);

  nomef = strtok(NULL, " ");

  for (i = 1; i < espacos; i++)
  {
    nomef = strtok(NULL, " ");
  }

  strcat(nomef, ", ");
  strcat(nomef, pnome);

  printf("%s\n", nomef);

  return 0;
}