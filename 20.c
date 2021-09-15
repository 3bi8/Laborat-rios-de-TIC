#include<stdio.h>
	
		main(){
	
		float chico = 1.50, juca = 1.10, cresC = 0.02, cresJ = 0.03, cont = 0;
		do{
			chico += cresC;
			juca += cresJ;
			cont++;
		while(chico > juca);
		printf("Em %d anos o Juca sera maior que o Chico\n", cont);
		}
	}
