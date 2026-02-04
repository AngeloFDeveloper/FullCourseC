#include <stdio.h>

int main() {
	
	int numero, soma = 0;
	
	do {
	
		printf("Digite um numero: ");
		scanf ("%d", &numero);
	
		soma = soma + numero;
}

	while(numero != 0);

	printf("A soma e %d", soma);
	return 0;

}
