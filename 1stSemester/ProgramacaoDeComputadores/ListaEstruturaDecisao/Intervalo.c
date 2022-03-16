#include <stdio.h>
 
int main() {
 
  float valorIntervalo;

  scanf("%f", &valorIntervalo);

  if (valorIntervalo >= 0 && valorIntervalo <= 25) {
    printf("Intervalo [0,25]\n");
  } else if (valorIntervalo >= 25 && valorIntervalo <= 50) {
    printf("Intervalo (25,50]\n");
  } else if (valorIntervalo >= 50 && valorIntervalo <= 75) {
    printf("Intervalo (50,75]\n");
  } else if (valorIntervalo >= 75 && valorIntervalo <= 100) {
    printf("Intervalo (75,100]\n");
  } else {
    printf("Fora de intervalo\n");
  } 

  return 0;
}