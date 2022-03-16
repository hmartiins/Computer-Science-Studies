#include <stdio.h>
 
int main() {
 
  float salario;
  float novoSalario, reajusteGanho;
  int percentual;
 
  scanf("%f", &salario);

  if (salario >= 0 && salario <= 400) {
    percentual = 15;
    reajusteGanho = 0.15 * salario;
  }
  else if (salario >= 400.01 && salario <= 800) {
    percentual = 12;
    reajusteGanho = 0.12 * salario;
  }
  else if (salario >= 800.01 && salario <= 1200.00) {
    percentual = 10;
    reajusteGanho = 0.10 * salario;
  }
  else if (salario >= 1200.01 && salario <= 2000) {
    percentual = 7;
    reajusteGanho = 0.07 * salario;
  }
  else {
    percentual = 4;
    reajusteGanho = 0.04 * salario;
  }
  novoSalario = salario + reajusteGanho;

  printf("Novo salario: %.2f\n", novoSalario);
  printf("Reajuste ganho: %.2f\n", reajusteGanho);
  printf("Em percentual: %i %%\n", percentual);

  return 0;
}