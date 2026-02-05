#include <stdio.h>

int main (){
	
	char opcao;
	printf("Informe a opção: \n");
	printf("A - Saldo de Conta: \n");
	printf("B - Extrato de Conta \n");
	printf("C - Limite da Conta: \n");
	scanf("%c", &opcao);
	
	if(opcao == 'a'){
		printf("O Saldo e.....");
	} else if (opcao == 'b'){
		printf("O Extrato da Conta.....");
	} else if (opcao == 'c'){
		printf("O Limite da conta e.....");
	} else{
		printf("Opção desconhecida ... \n");
	}
	
// gerar alfabeto completo com loop
	for (int i = 97; i <= 122; i++){
		printf("%c\n", i);
	}

	return 0;

}
