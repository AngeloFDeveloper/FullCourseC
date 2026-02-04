#include <stdio.h>

/* Tipos de dados

Tipos Numéricos:
- Inteiros
- Reais
*/

int main(){
	// inteiro
	int numero_inteiro; //7, 890, 500...
	
	//reais
	float media, nota1, nota2; //23.4, 1.23, 6.67...
	
	
	printf ("Qual a primeira nota? ");
	scanf ("%f", &nota1);
	
	printf ("Qual a segunda nota? ");
	scanf ("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("A tua media e %f", media);
	
	return 0;
}


