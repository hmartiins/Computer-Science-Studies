#include <stdio.h>
 
int main() {
  int i, valoresASeremLidos, valorIntervalo = 0, dentroIntervalo = 0, foraIntervalo = 0;

  scanf("%i", &valoresASeremLidos);

  for (i = 1; i <= valoresASeremLidos; i++) {
    scanf("%i", &valorIntervalo);

    if(valorIntervalo >= 10 && valorIntervalo <= 20) {
      dentroIntervalo += 1;
    } else {
      foraIntervalo += 1;
    }
  }

  printf("%i in\n", dentroIntervalo);
  printf("%i out\n", foraIntervalo);

  return 0;
}