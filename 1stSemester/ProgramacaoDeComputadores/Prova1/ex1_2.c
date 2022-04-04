#include <stdio.h>

int main() {
  float baseMaior, baseMenor, altura;
  float area = 0;

  scanf("%f %f %f", &baseMaior, &baseMenor, &altura);

  area = ((baseMaior + baseMenor) / 2) * altura;

  printf("Area = %.3f Km2\n", area);

  if (area > 30) {
    printf("Banana");
  } else if(area > 24.9) {
    printf("Uva");
  } else if(area >= 18.5) {
    printf("Morango");
  } else {
    printf("Tomate");
  }


  return 0;
}
