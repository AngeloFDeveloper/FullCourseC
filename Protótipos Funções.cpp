#include <stdio.h>
//prototipo de função
int soma(int num1, int num2);

int main(){
	int n1, n2, ret;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Informe o segundo Numero: ");
	scanf("%d", &n2);
	
	ret = soma(n1, n2);
	
	printf("A soma e %d com %d e %d", n1, n2, ret);
	
	return 0;
}

int soma(int num1, int num2){
	return num1 + num2;
	
}
