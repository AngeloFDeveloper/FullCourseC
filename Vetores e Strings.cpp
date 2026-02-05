#include <stdio.h>

// vetores - parte 1

// array uni-dimensional
//char nome[50];

int main() {
	// vetores e strings
	char nome[50];
	printf("Qual o seu nome? ");
	gets(nome);
	printf("Ola %s \n", nome);
	
	//vetores e caracteres
	char letras[26]; //0...25
	//'b'
	int contador = 0;
	for(int i = 97; i <= 122; i++){
		letras[contador] = i;
		contador = contador +1;
		
	} //imprimir as letras e os seus valores em decimais
	for(int i = 0; i < 26; i++){
		printf("%d == %c\n", letras[i], letras[i]);
	}
	

	//char l = 'l';
	//char n = 45;
	
	//vetores de inteiros
	int numeros[10]; //0...9
	numeros[0]= 1;
	numeros[1]= 3;
	numeros[2]= 5;
	numeros[3]= 7;
	numeros[4]= 9;
	
	//vetores e reais
	float valores[5]; //0..4
	for(int i = 0; i < 5; i++){
		valores[i] = (float)numeros[i] / (float)2;
	}
	for (int i = 4; i>= 0; i--){
		printf("%.2f\n", valores[i]);
	}
	
	return 0;
	
}
