#include <stdio.h>
#include <math.h>

int numZeros(int);
int max(int, int);
char nToChar(int);
int digitos(int, double);
int random();

int main()
{
  int num1;
  int num2;

  scanf("%d", &num1);
  scanf("%d", &num2);

  printf("O maior numero e: %d\n", max(num1, num2));
  printf("O caractere ASCII equivalente ao numero %d e: %c  \n", num1, nToChar(num1));

  return 0;
}

int max(int num1, int num2)
{
  if (num1 >= num2)
  {
    return num1;
  }
  else
  {
    return num2;
  }
}

char nToChar(int num1)
{
  return '0' + num1;
}
