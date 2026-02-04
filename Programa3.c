// menor idade -18, adulto entre 18 e 60, idoso 60+, idd no fim

#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Qual a sua idade? ");
	scanf("%d", &idade);
	
	if( idade < 18 ){
		printf("Tu es menor de idade \n");
	} else if ( idade >= 18 && idade < 60){
		printf("Tu es adulto! \n");
	} else {
		printf("Tu es Idoso! \n");
	} 
	
	printf("A tua idade e : %d", idade);
	
	return 0;
}
