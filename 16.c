#include<stdio.h>
	
		main(){
		
		float altura, maior = 0, menor = 10;
		for(int i = 1; i <= 15; i++){
			printf("Digite uma altura: \n")
			scanf("%f", &altura);
			
			if(altura > maior)
				maior = altura;
				
			else if(altura < menor)
				menor = altura;
		}
		
		printf("A maior idade: %.2f \nA menor idade: %.2f", maior, menor);
	
		
	}
