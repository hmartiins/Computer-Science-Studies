#include <stdio.h>

int main() {

	int numerosPares = 0, entradasPares = 0;
	int entradaValor;

	while(entradasPares <= 4) {
		scanf("%i", &entradaValor);

		if(entradaValor % 2 == 0) {
			numerosPares++;
		}

		entradasPares++;
	}

	printf("%i valores pares\n", numerosPares);

	return 0;
}
