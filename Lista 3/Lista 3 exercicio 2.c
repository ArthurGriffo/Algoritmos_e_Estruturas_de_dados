#include<stdio.h>

int main(void){
	float reais,dolar;
	
	printf("Digite a quantidade de dolares:");
	scanf("%f",&dolar);
	
	reais=(dolar)*3.94;
	
	printf("Total em reais:%.2f",reais);
	
	return 0;
}
