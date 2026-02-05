#include <stdio.h>

	int main(){
		//declaração de uma string em C
		char nome[50]; // 49 caracteres
		
		printf("Qual é o teu nome? ");
		gets(nome);
		
		printf("O teu nome e :%s", nome);
		
	
	return 0;

	}
