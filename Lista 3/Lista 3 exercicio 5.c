#include<stdio.h>

int main(void){
	float sb,qs;

	//entrada
	printf("Digite o salario bruto:");
	scanf("%f",&sb);
	
	//processamento
	qs=sb/998;
	
	//sa�da
	printf("A quantidade de salarios minimos que ganha e:%.2f",qs);
	
	return 0;
}

