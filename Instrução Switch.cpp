#include <stdio.h>

	int main(){
		
		int valor;
		
		printf("Digite um valor de 1 a 7: ");
		scanf("%d", &valor);
		
		switch(valor){
		case 1:
			printf("Segunda-Feira \n");
			break;
		case 2:
			printf("Terça-Feira \n");
			break;	
		case 3:
			printf("Quata-Feira \n");
			break;	
		case 4:
			printf("Quinta-Feira \n");
			break;	
		case 5:
			printf("Sexta-Feira \n");
			break;	
		case 6:
			printf("Sabado\n");
			break;	
		case 7:
			printf("Domingo\n");
			break;
		default:
			printf("Valor Invalido \n");
		}
	}
