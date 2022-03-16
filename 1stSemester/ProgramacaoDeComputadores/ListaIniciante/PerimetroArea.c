#include <stdio.h>
#include <math.h>

int main() {
    float diametro = 0;
    float perimetro, area = 0;

    printf("Digite o diametro da circunferencia: ");
    scanf("%f", &diametro);

    perimetro = 2 * M_PI * (diametro/2);
    area = M_PI * pow((diametro/2), 2);

    printf("Valor do perimetro: %.3lf\n", perimetro);
    printf("Valor da area: %.2lf\n", area);

    return 0;
}
