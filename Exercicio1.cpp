#include <stdio.h>

	int main(){
		
		int valor1, valor2, valor3, quadrado1, quadrado2, quadrado3, soma;
		
		printf("Digite o primeiro valor: ");
		scanf("%d", &valor1);
		
		printf("Digite o segundo valor: ");
		scanf("%d", &valor2);
		
		printf("Digite o terceiro valor: ");
		scanf("%d", &valor3);
		
		
		quadrado1 = valor1 * valor1;
		quadrado2 = valor2 * valor2;
		quadrado3 = valor3 * valor3;
		
		soma = quadrado1 + quadrado2 + quadrado3;
		
		printf("A soma dos quadrados dos valores digitados e : %d", soma);
		
		return 0;
	}
