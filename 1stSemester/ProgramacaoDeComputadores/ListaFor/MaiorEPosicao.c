#include <stdio.h>
 
int main() {
  int i, valorEntrada, posicaoEntrada = 0, maiorValor = 0;

  for (i = 1; i <= 100; i++) {
    scanf("%i", &valorEntrada);

    if(valorEntrada > maiorValor) {
      maiorValor = valorEntrada;
      posicaoEntrada = i;
    }
  }

  printf("%i\n", maiorValor);
  printf("%i\n", posicaoEntrada);

  return 0;
}