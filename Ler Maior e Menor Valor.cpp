// faça um programa que leia 10 números e escreva o maior e menor valor lido 

#include <stdio.h>

int main (){
	int numero, maior, menor = 0;
	
	for (int i = 0; i < 10; i++){
		printf("Informe o valor %d de 10: ", i + 1);
		scanf("%d", &numero);
		//este vai ser o primeiro loop
		if (i == 0){
			maior = numero;
			maior = numero;
		}
		
		if (numero > maior){
			maior = numero;	
		}
		if (numero < menor){
			menor = numero;
			
		}
	}
	printf("O maior valor e %d e o menor valor e %d", maior, menor);
	return 0;
}
