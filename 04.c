#include<stdio.h>

	int main(){
	
		float salActual, aumento, novoSal;
		printf("Digite o salario actual: \n");
		scanf("%f", &salActual);
		aumento = (salActual*25)/100;
		novoSal = salActual+aumento;
		printf("O aumento de 25%% porcentos equivale a:\n %f",aumento);
		printf("\nO novo salario e: %f", novoSal);
	
		return 0;
	}