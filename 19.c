#include<stdio.h>
	
		 main(){
	
		int n1 = 0, n2 = 1, fib = 0;
		
		printf("0 1 ")
		for(int i = 1; i < 20; i++){
			fib = n1 + n2;
			n1 = n2;
			n2 = fib;

			printf("%d ", fib);
		}	
	
	}
