#include<stdio.h>

int main(void){
	float preco,total;
	char nome[20]; //string
	
	printf("Informe o nome do produto:");
	scanf("%s",&nome);
	printf("Informe o preco do produto:");
	scanf("%f",&preco);
	
	total=(0.9*preco);
	
	printf("Nome:%s\n",nome);
	printf("Total:%.2f",total);
	
	return 0;
	
}
