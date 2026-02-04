#include <stdio.h>

int main(){
	
	int valor;
	int valorquadrado;
	
	printf("Digite o primeiro valor: ");
	 fflush(stdout);
	scanf("%d", &valor);
	
	 valorquadrado = valor * valor;	
	
	printf("O valor de %d ao quadrado e : %d", valor, valorquadrado);
	
	
}
