#include<stdio.h>

	int main(){
	
		float salActual, aumento2, novoSal;
		int aumento;
		printf("Digite o salario actual e a percentagem de aumento: \n");
		scanf("%f%f", &salActual, &aumento);
		aumento2 = (salActual*aumento)/100;
		novoSal = salActual+aumento2;
		printf("O aumento de %i%% porcentos equivale a:\n %f", aumento, aumento2);
		printf("\nO novo salario e: %f", novoSal);
	
		return 0;
	}