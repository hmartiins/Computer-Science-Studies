#include <stdio.h>
#include <math.h>

void converteDeRadianoParaGrau(double *);

int main()
{
  double angulo;

  printf("Informe um angulo em radianos: ");
  scanf("%lf", &angulo);

  converteDeRadianoParaGrau(&angulo);

  printf("Angulo em graus: %.5lf\n", angulo);
  return 0;
}

void converteDeRadianoParaGrau(double *p_ang)
{
  *p_ang = *p_ang * 180 / M_PI;
}