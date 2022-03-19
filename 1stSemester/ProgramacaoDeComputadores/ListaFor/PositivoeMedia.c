#include <stdio.h>
 
int main() {
  int i, qtdPositivos = 0;
  double valor, media = 0;
  
  for (i = 0; i <= 5; i++) {
    scanf("%lf", &valor);

    if (valor >= 0) {
      qtdPositivos += 1;
      media += valor;
    }
  }

  printf("%d valores positivos\n", qtdPositivos);
  printf("%.1lf\n", media / qtdPositivos);

  return 0;
}