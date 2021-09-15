	#include<stdio.h>

	main(){
	
		float saco, gato, gato2, resto;
		printf("Digite o Peso do saco de Racao: \n");
		scanf("%f", &saco);
		printf("Diz quantas gramas de Racao das a cada gato: \n");
		scanf("%f%f", &gato, &gato2);
		resto = (saco*1000)-((gato+gato2)*5);
		resto/=1000;
		printf("Ao fim de 5 dias soberara\n%.2fkg de racao", resto);
	
	}
