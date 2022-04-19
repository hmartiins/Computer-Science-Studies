#include <stdio.h>
 
int main() {
  int i = -1, j = 7;
  
  while (i != 9) {
    j = 7;
    i += 2;

    for (j = j; j >= 5; j--) {
      printf("I=%d J=%d\n", i, j);
    }

  }
   
  return 0;
}