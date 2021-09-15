#include<stdio.h>

	int main(){
	
		float precFab, percLucro, percImp, precTotal;
		printf("Digite o preco da fabrica, o percentual do lucro e do imposto:\n");
		scanf("%f%f%f", &precFab, &perLucro, &perImp);
		percLucro = (precFab * percLucro) / 100;
		percImp = (precFab * percImp) / 100;
		precTotal = precFab + percLucro + percImp;
		printf("O valor corespondente ao lucro do distribuidor e:\n %.2f", percLucro);
		printf("O valor corespondente aos impostos e:\n %.2f", percImposto);
		printf("O valor final do veiculo e:\n %.2f", precTotal);
	
		return 0;
	}
