#include<stdio.h>
	
	int main(){
	
		int n, n1, n2, n3, n4;
		printf("Digite o numero: \n");
		scanf("%i", &n);
		while(n < 10000 || n <= 99999 ){
		n1 = n/10000;
		n2 = (n/1000) % 10;
		n3 = (n%1000) / 10;
		n4 = n%10;
		
		if(n1 == n4 && n2 == n3)
			printf("O numero %d e polindromo: \n", n);
		else
			printf("O numero %d nao e polindromo: \n", n ");
	
		}
		return 0;
	}

