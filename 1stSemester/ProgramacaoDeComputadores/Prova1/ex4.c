#include <stdio.h>

int main() {
  int numeroRecebido1 = 1, numeroRecebido2 = 1, quantidadePares = 0;

  while((numeroRecebido1 != 0) && (numeroRecebido2 != 0)) {
    scanf("%i %i", &numeroRecebido1, &numeroRecebido2);

    if(numeroRecebido1 == 0 || numeroRecebido2 == 0) {
        break;
    }

    if(numeroRecebido1 % 2 == 0 && numeroRecebido1 > 0) {
        quantidadePares += 1;
    }
    if(numeroRecebido2 % 2 == 0 && numeroRecebido2 > 0) {
        quantidadePares += 1;
    }

  }

  printf("%i\n", quantidadePares);

  return 0;
}
