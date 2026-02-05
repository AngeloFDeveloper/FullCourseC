//Escrever Funções
#include <stdio.h>


/* Estrutura das funções

- Tipo de Retorn
- Nome
- Parâmetros de entrada (opcional)
- implementação
- retorno (opcional)
*/

void mensagem (){
	printf("Bem-Vindo! ");
}

int soma (int num1, int num2){
	int res = num1 + num2;
	return res;
}

void proximo_char(char caractere){
	printf("%c", caractere+1);
}

int main(){
	printf("Ola...\n");
	
	mensagem();
	
	
	printf("Retorno = %d\n", soma(4,6));
	
	char cara = 'a';
	proximo_char(cara);
	
	return 0;
}
