#include <stdio.h>
#include <string.h>

int main()
{

  char palavra1[30];
  char palavra2[30];

  scanf("%30[^\n]", palavra1);
  fflush(stdin);
  scanf("%30[^\n]", palavra2);

  if (strcasecmp(palavra1, palavra2) < 0)
  {
    printf("%s\n%s", palavra1, palavra2);
  }
  else
  {
    printf("%s\n%s", palavra2, palavra1);
  }

  return 0;
}