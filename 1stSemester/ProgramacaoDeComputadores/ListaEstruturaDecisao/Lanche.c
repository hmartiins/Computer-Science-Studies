#include <stdio.h>
 
int main() {
 
  int codigoItem, quantidadeItem;
  double precoTotal = 0;
 
  scanf("%i %i", &codigoItem, &quantidadeItem);

  if (codigoItem == 1) {
    precoTotal = 4.00 * quantidadeItem;
  }
  else if (codigoItem == 2) {
    precoTotal = 4.50 * quantidadeItem;
  }
  else if (codigoItem == 3) {
    precoTotal = 5.00 * quantidadeItem;
  }
  else if (codigoItem == 4) {
    precoTotal = 2.00 * quantidadeItem;
  }
  else if (codigoItem == 5) {
    precoTotal = 1.50 * quantidadeItem;
  }

  printf("Total: R$ %.2f\n", precoTotal);

  return 0;
}