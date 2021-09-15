#include<stdio.h>
	
	int main(){
		
		int i, n, fat;
		
		printf("Digite um numero: \n");
		scanf("%d", &n);
		int fat = 1;
		for(i = n; i >= 1, i--){
		fat *= i;
		printf("%d x ", i);
		
		}
		printf("= %d", fat);
	
	
		return 0;
	}
