/* escreve um programa que declare um inteiro, inicialize-o,
incrementa de 100 em 100, imprimindo o valor na tela, ate que o valor seja 100000 */

#include <stdio.h>

int main(){
	int numero = 0;
	
	for (int i = 0; i < 100000; i = i + 100){
		printf("O valor de i e %d \n", i);
	}
	return 0;
}
