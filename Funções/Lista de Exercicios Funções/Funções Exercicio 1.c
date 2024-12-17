#include<stdio.h>

int soma (int x, int y){
	int resultado;
	resultado=x+y;
	return resultado;
}
int main(void){
	int n1,n2,total;
	
	printf("Informe um numero:");
	scanf("%d",&n1);
	printf("Informe outro numero:");
	scanf("%d",&n2);
	
	total=soma(n1,n2);
	
	printf("A soma e:%d",total);
	return 0;
}
