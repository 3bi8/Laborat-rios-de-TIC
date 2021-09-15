#include<stdio.h>
	int main(){
	
		float sal_min, sal_fun;
		int  quant=0;
		printf("Digite o salario minimo e o seu:\n);
		scanf("%f%f", &sal_min, &sal_fun);
		quant = sal_fun/sal_min;
		printf("No seu salario temos %i salarios minimos",quant);
		return 0;
	}