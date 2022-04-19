#include <stdio.h>
 
int main() {
  float i = 0.0, j, valorASerSomado = 0;
  
  while (i != 2) {
    valorASerSomado += 0.2;
    i = 0;
    j = 1.00 + valorASerSomado;
    i += valorASerSomado;

    for (j = j; j <= 3; j++) {
      printf("I=%.2lf J=%.2lf\n", i, j);
    }
  }
   
  return 0;
}