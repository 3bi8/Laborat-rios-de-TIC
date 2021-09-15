#include<stdio.h>
#include<math.h>
	int main(){
	
		int a, b, c, x1, x2, delta;
		printf("Digite o valor de a b e c: \n); 
		scanf("%d%d%d", &a, &b, &c);
		if(a > 0){
			delta = (b^2) - (4*a*c);
			if(delta != 0 && delta > 0){
				x1 = (-b + sqrt(delta));
				x2 = (-b - sqrt(delta));
				printf("X1 = %d\nX2 = %d", x1, x2);
			}
		}else{
			printf("Nao e uma equacao do segundo grau");
			
		return 0;
	}
