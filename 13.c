#include<stdio.h>
	
	int main(){
		
		int i, n = 0;
		
		for(i = 1; i <= 500; i++){
			if(i % 2 != 0 && i % 3 ==0){
				n += i;
			}
		}
		printf("A soma dos numeros e:\n%d", n);
		return 0;
	}
