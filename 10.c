#include<stdio.h>

	int main(){
	
		float salMin, valorPorPagar, valorComDesconto;
		int quantqw, valorqw;
		printf("Digite o salario minimo e a quantidade de quilowats consmido por residencia:\n");
		scanf("%f%i", &salMin, &quantqw);
		valorqw = salMin / 5;
		valorPorPagar = valorqw*quantqw;
		valorComDesconto = (valorPorPagar * 15) / 100;
		valorComDesconto = valorPorPagar - valorComDesconto;
		printf("Cada Quilowat, custa:\n%.2f", valorqw);
		printf("Esta residencia devera pagar:\n%.2f", valorPorPagar);
		printf("Com um desconto de 15%% esta residencia devera pagar:\n%.2f", valorComDesconto);
		
			
		return 0;
	}
