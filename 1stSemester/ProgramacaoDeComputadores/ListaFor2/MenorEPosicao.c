#include <stdio.h>
 
int main() {
  int i, n, valorEntrada, posicaoEntrada = 0, menorValor = 99999;

  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    scanf("%d", &valorEntrada);

    if(valorEntrada < menorValor) {
      menorValor = valorEntrada;
      posicaoEntrada = i;
    }
  }

  printf("%d\n", menorValor);
  printf("%d\n", posicaoEntrada - 1);

  return 0;
}