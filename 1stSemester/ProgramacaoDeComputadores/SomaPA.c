#include <stdio.h>

int main() {
  int a1, n;
  int termoGeral, resultado;
  int r = 1;

  printf("Informe o valor de \"a1\" e \"n\": ");
  scanf("%d" "%d", &a1, &n);

  termoGeral = a1 + (n - 1) * r;
  resultado = (n * (a1 * termoGeral)) / 2;

  printf("\nSoma PA = %d", resultado);

  return 0;
}
