#include <stdio.h>

int main(){
	
		int valor = 2;
		printf ("Valor Vale %d\n", valor);
		
		//deslocamento de its para a esquerda
		valor = valor << 2;
		printf("Valor Vale %d \n", valor);
		valor = 2;
		
		//deslocamento para a direita
		valor = valor >> 1;
		printf("Valor Vale %d \n", valor);
		
		valor = 2;
		valor = ~valor;
		printf("Valor Vale %d \n", valor);
		
		return 0;
}
