#include<stdio.h>

int main(void){
	float hn,he,salario;
	
	printf("informe o total de horas trabalhadas:");
	scanf("%f",&hn);
	printf("informe o total de horas extras:");
	scanf("%f",&he);
	
	salario=(10*hn)+(15*he);
	
	printf("Salario mensal:%.2f",salario);
	
	return 0;
}
