#include <stdio.h>

int main() {

  int i, casosASeremTestados, quantia = 0, totalCoelhos = 0, totalRatos = 0, totalSapos = 0;
  double porcentagem = 0;
  char tipo;

  scanf("%i", &casosASeremTestados);

  for (i = 1; i <= casosASeremTestados; i++) {
    scanf("%i %c", &quantia, &tipo);
    
    if(tipo == 'C') {
      totalCoelhos += quantia;
    } else if(tipo == 'R') {
      totalRatos += quantia;
    } else if(tipo == 'S') {
      totalSapos += quantia;
    }
  }

  printf("Total: %i cobaias\n", (totalCoelhos + totalRatos + totalSapos));
  
  printf("Total de coelhos: %i\n", totalCoelhos);
  printf("Total de ratos: %i\n", totalRatos);
  printf("Total de sapos: %i\n", totalSapos);

  porcentagem =  totalCoelhos * 1.0 / (totalCoelhos * 1.0 + totalRatos * 1.0 + totalSapos * 1.0);
  printf("Percentual de coelhos: %.2lf %%\n", porcentagem * 100);
  porcentagem =  totalRatos * 1.0 / (totalCoelhos + totalRatos + totalSapos);
  printf("Percentual de ratos: %.2lf %%\n", porcentagem * 100);
  porcentagem =  totalSapos * 1.0 / (totalCoelhos + totalRatos + totalSapos);
  printf("Percentual de sapos: %.2lf %%\n", porcentagem * 100);  
  
  return 0;

}
