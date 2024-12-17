#include<stdio.h>

int main(void){
	int n,verificador;
	
	printf("Digite um numero:");
	scanf("%d",&n);
	
	verificador=n%2;
	
	if(verificador==0)
		printf("numero par");
	else
		printf("numero impar");
	
	return 0;
}
