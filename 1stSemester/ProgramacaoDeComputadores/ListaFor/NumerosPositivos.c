#include <stdio.h>
 
int main() {
  int i, qtdPositivos = 0;
  double valor;
  
  for (i = 0; i <= 5; i++) {
    scanf("%lf", &valor);

    if (valor >= 0) {
      qtdPositivos += 1;
    }
  }

  printf("%d valores positivos\n", qtdPositivos);

  return 0;
}