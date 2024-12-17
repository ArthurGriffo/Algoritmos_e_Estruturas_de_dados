#include<stdio.h>

int main(void){
	float sb,s,st;
	char nome[20];
	
	printf("Digite o nome do funcionario:");
	scanf("%s",&nome);
	printf("Digite o salario bruto:");
	scanf("%f",&sb);
	
	printf("Seu nome:%s\n",nome);

	if(sb>=1000){
		st=sb*0.91;
		printf("Salario total:%f",st);
	}else{
		st=sb*0.89;
		printf("Salario total:%f",st);
	}
	return 0;
}
