#include<stdio.h>
	
	int main(){
	
		int n, i, contP = 0, par = 0 , impar = 0, contI = 0;
		float medP, medI;
		
		for(i = 1; i <= 10; i++){
			printf("Digite um numero:\n");
			scanf("%d", &n);
			if(n % 2){
				contP++;
				par += n;
			}else{
				contI ++;
				impar += n;
			}
		}
		medP = par/contI;
		medI = impar/contP;
		printf("A media dos numeros pares digitados e:\n%d", medP);
		printf("A media dos numeros impares digitados e:\n%d", medI);
	
		return 0;
	}
