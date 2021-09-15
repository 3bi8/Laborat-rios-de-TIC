#include<stdio.h>

	int main(){
	
	float custo, convite;
	int quant;
	printf("Digite o custo do espetáculo e do convite:\n");
	scanf("%f%f", &custo, &convite);
		quant = custo/convite;
		printf("São necessarios: %i convites", quant);
		return 0;
	
	}
}