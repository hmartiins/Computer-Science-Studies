#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define BRANCO 0
#define CINZA 1
#define PRETO 2
#define MAX_VERTICES 100 // número máximo de vértices do grafo
#define INF LONG_MAX     // infinito

void dijkstra(int, long long[][*], int, int); // implementa o algortimo Dijkstra
void printGraph(int *, int, int);             // exibe o caminho do vértice origem ao destino
void initMatriz(int, int, long long[][*]);    // inicializa a matriz de adjacências

int main()
{
  int i, v, a, x, y, peso, o, d;

  printf("Numero de vertices: ");
  scanf("%d", &v);

  if (v > MAX_VERTICES)
  {
    printf("Aviso: numero maximo de vertices (%d) excedido (%d)!\n", MAX_VERTICES, v);
    exit(1);
  }

  long long adj[v][v]; // matriz de adjacências

  while (v != 0)
  {
    initMatriz(v, v, adj);

    printf("Número de arestas: ");
    scanf("%d", &a);

    printf("Arestas:\n");
    for (i = 1; i <= a; i++)
    {
      scanf("%d %d %d", &x, &y, &peso);
      adj[x - 1][y - 1] = peso;
      // adj[y - 1][x - 1] = peso; // Se o grafo não for orientado, descomentar
    }

    printf("Origem: ");
    scanf("%d", &o);
    printf("Destino: ");
    scanf("%d", &d);

    dijkstra(v, adj, o - 1, d - 1);

    // entrada para o próximo grafo
    printf("Número de vértices: ");
    scanf("%d", &v);
  }
  return 0;
}

void initMatriz(int l, int c, long long a[][c])
{
  int i, j;
  for (i = 0; i < l; i++)
  {
    for (j = 0; j < c; j++)
    {
      a[i][j] = INF;
    }
  }
}

void dijkstra(int v, long long adj[][v], int s, int destino)
{
  int cor[v], pai[v];
  int u, i, j;
  long long d[v], dist;

  for (u = 0; u < v; u++)
  {
    cor[u] = BRANCO;
    d[u] = INF;
    pai[u] = -1;
  }
  cor[s] = CINZA;
  d[s] = 0;

  for (i = 1; i <= v; i++)
  {
    // menor distância
    u = 0;
    dist = INF;
    for (j = 0; j < v; j++)
    {
      if (cor[j] != PRETO && d[j] < dist)
      {
        u = j;
        dist = d[j];
      }
    }

    for (j = 0; j < v; j++)
    {
      if (adj[u][j] < INF)
      {
        // relaxar
        if (d[j] > d[u] + adj[u][j])
        {
          d[j] = d[u] + adj[u][j];
          pai[j] = u;
        }

        if (cor[j] == BRANCO)
        {
          cor[j] = CINZA;
        }
      }
    }
    cor[u] = PRETO;
  }

  if (d[destino] != INF)
  {
    printf("Distancia de %d a %d = %Ld\n", s + 1, destino + 1, d[destino]);
    printGraph(pai, s, destino); /* exibe o caminho de s a destino */
  }
  else
  {
    printf("Nenhum caminho de %d a %d\n", s + 1, destino + 1);
  }
}

void printGraph(int *pai, int s, int v)
{
  if (s == v)
  {
    printf("%d\n", s + 1);
  }
  else if (pai[v] == -1)
  {
    printf("Nenhum caminho de %d para %d\n", s + 1, v + 1);
  }
  else
  {
    printGraph(pai, s, pai[v]);
    printf("%d\n", v + 1);
  }
}
