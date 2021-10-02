#include<stdio.h>


	int main(){
	
		int ano_a, ano_n, idade1, idade2050;
		printf("Digite o ano actual e o seu ano de nascimento: \n");
		scanf("%i%i", &ano_a, &ano_n);
		
		idade1 = ano_a - ano_n;
		idade2050: 2050 - ano_n;
		printf("Actualmente você tem:\n%i anos de idade\nEm 2050 você terá:\n%i anos de idade.",idade1,idade2050);
		return 0;
	}
