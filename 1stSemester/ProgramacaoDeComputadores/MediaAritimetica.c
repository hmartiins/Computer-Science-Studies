#include <stdio.h>

int main() {
  float media_aritmetica, media_ponderada; 
  int n1, n2;

  printf("######  MEDIA ARITMETICA E MEDIA PONDERADA  ###### \n");
  
  printf("Digite o primeiro numero: ");
  scanf("%i", &n1);

  printf("Digite o segundo numero: ");
  scanf("%i", &n2);
  
  media_aritmetica = ((n1 * 1.00) + (n2 * 1.00))/2;

  media_ponderada = (3 * (n1 * 1.00) + 5 * (n2 * 1.00)) / (3 + 5);  
    
  printf("A media aritmetica e %.2f e a media ponderada e %.2f ", media_aritmetica, media_ponderada);
    
  return 0;
}