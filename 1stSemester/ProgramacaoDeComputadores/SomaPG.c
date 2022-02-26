#include <stdio.h>
#include <math.h>

int main() {
    float a1, q, n;
    int termoGeral, resultado;

    printf("Informe o valor de \"a1\", \"q\" e \"n\": ");
    scanf("%f" "%f" "%f", &a1, &q, &n);

    resultado = (a1 * pow(q, n) - 1) / (q - 1);

    printf("\nSoma PG = %d", resultado);

    return 0;
}