/* programa 1  - faça um programa que determine e mostre 
os cinco prmeiros múltiplos de 3, considerando números maiores que 0
*/
#include <stdio.h>
	
int main(){
	
	int numero = 1;
	int contador = 0;
	
	printf("Apresentar os 5 primeiros multiplos de 3: \n");
	while (contador < 5){
		if(numero % 3 == 0){
			printf("O numero %d e multiplo de 3. \n", numero);
			contador = contador + 1;
		}
		numero = numero +1;
	}
	
	
	return 0;
}
