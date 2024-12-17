#include<stdio.h>
int soma (int x, int y){
	int resultado;
	resultado=x+y;
	return resultado;
}

int multiplicacao (int x, int y){
	int produto=0,z;
	z=x;
	for(x=0;x<z;x++)
		produto=soma(resultado,y); //resultado+=y;
	
	return produto;
}
int main(void){
	int n1,n2,total;
	
	printf("Informe um numero:");
	scanf("%d",&n1);
	printf("Informe outro numero:");
	scanf("%d",&n2);
	
	total=multiplicacao(n1,n2);
	
	printf("O resultado e:%d",total);
	return 0;
}
