#include <stdio.h>
 
int main() {
  int i, valorEntrada = 0;
  scanf("%d", &valorEntrada);

  if (valorEntrada % 2 == 0) {
    valorEntrada += 1;
  }

  for (i = 0; i <= 10; i++) {
    printf("%d\n", valorEntrada + i);
    
    i++;
  }

  return 0;
}