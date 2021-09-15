#include<stdio.h>

	int main(){
	
		float salMin, salBruto, imposto, salLiquido;
		int quanthT, valorhT;
		printf("Digite o salario minimo e o numero de horas trabalhadas:\n");
		scanf("%f%i", &salMin, &hT);
		valorhT = salMin/2;
		salBruto = (valorhT*quanthT);
		imposto = (salBruto*3)/100;
		salLiquido = salBruto - imposto;
		 printf("O salario Liquido do funcionario e:\n %.2f", salLiquido);
	
		return 0;
	}