#include<stdio.h>

int main(void){
	float peso,altura,imc;
	
	do{
		printf("\nInforme o peso:");
		scanf("%f",&peso);
		printf("Informe a altura:");
		scanf("%f",&altura);
		
		imc=(peso/(altura*altura));
		printf("IMC:%.2f",imc);
	}while(altura!=0);
	return 0;
}
