#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  FILE *arquivo;
  FILE *saida;

  char nome[3][30];
  float notas[3][2];

  arquivo = fopen("dados.csv", "r");

  if (arquivo == NULL)
  {
    printf("Erro! Não consegui abrir o arquivo de leitura");
    return 1;
  }

  char linha[20];
  fgets(linha, 20, arquivo); // para ler a primeira linha se tiver cabecalho

  char *token;
  int i = 0;
  while (fgets(linha, 20, arquivo) != NULL)
  {
    token = strtok(linha, ",");
    strcpy(nome[i], token);

    token = strtok(NULL, ",");
    notas[i][0] = strtof(token, NULL);

    token = strtok(NULL, ",");
    notas[i][1] = strtof(token, NULL);
    i++;
  }

  for (i = 0; i < 3; i++)
  {
    printf("%s\n", nome[i]);
    printf("%.2f %.2f\n", notas[i][0], notas[i][1]);
  }

  fclose(arquivo);

  saida = fopen("saida.csv", "w");

  if (saida == NULL)
  {
    printf("Erro ao tentar abrir o arquivo de saida !\n");
    return 1;

    ntf(saida, "%s\n", linha);
  }

  float media;
  char m[5];

  for (i = 0; i < 3; i++)
  {
    media = (notas[i][0] + notas[i][1]) / 2;
    sprintf(m, "%.2f", media);
    strcpy(linha, nome[i]);

    strcat(linha, ",");
    strcat(linha, m);
    strcat(linha, "\n");

    // fprintf(saida, "%s\n", linha);
    fputs(linha, saida);
  }

  fclose(saida);

  return 0;
}