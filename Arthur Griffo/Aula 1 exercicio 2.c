#include<stdio.h>

int main(void){
	float salario,imposto,total;
	//entrada
	printf("Informe o salario:");
	scanf("%f",&salario);
	printf("Informe o imposto de renda:");
	scanf("%f",&imposto);
	
	//processamento
	total=(salario-imposto);
	
	//saída
	printf("Salario liquido:%.2f",total);
	
	return 0;
}
