#include <stdio.h>
#include <math.h>

int main() {
    float distanciaPercorrida, horas = 0;
    float perimetro, area = 0;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distanciaPercorrida);

    printf("Digite a quantidade de horas (h): ");
    scanf("%f", &horas);


    printf("A velocidade media e de: %.2lf Km/h\n", distanciaPercorrida / horas);

    return 0;
}
