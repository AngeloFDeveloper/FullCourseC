#include <stdio.h>

/* Operações Matemáticas

Somar +
Subtrair -
Multiplicar *
Dividir /
Elevar ao quadrado x ** x
módulo (resto da divisão de x por y) %
*/

int main(){
	
	//declarar as variaveis
	int num1, num2;
	float res;
	
	//pedir para digitar os dois valores
	printf("Digite o valor 1: ");
	scanf("%d", &num1);
	
	printf("Digite o valor 2: ");
	scanf("%d", &num2);
	
	
	// soma 
	res = num1 + num2;
	printf("A soma e %d \n", (int)res);
	
	// subtracao
	res = num1 - num2;
	printf("A subtracao e %d \n", (int)res);
	
	// multiplicacao
	res = num1 * num2;
	printf("A multiplicacao e %d \n", (int)res);
	
	//divisao 
	res = (float)num1 / (float)num2;
	printf("A divisao e %f \n", res);
	
	//elevar ao quadrado
	res = num1 * num1;
	printf("Elevado ao quadrado e %d \n", (int)res);
	
	// módulo (verificar se o num1 é par ou ímpar
	if(num1 % 2 == 0){
		printf("%d e par", num1);
	} else { 
	printf("%d e impar", num1);
	}
		

}
