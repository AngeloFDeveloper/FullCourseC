#include <stdio.h>

//tipos de dados

//booleanos (verdadeiro/falso) true/false

/* Na linguagem C, não existe um tipo de dado boolean

Mas, a linguagem C reconhece o valor 0 como Falso (false)
e qualquer valor diferente de 0 como verdadeiro (true) */

int main() {
	
	int booleano = 1; //1 é verdadeiro, 0 é falso
	
	if(booleano){
			printf("Verdadeiro...");
	} else{
		printf("Falso...");
	}
	return 0;

}
