#include<stdio.h>
int soma (int x, int y){
	int resultado;
	resultado=x+y;
	return resultado;
}
int multiplicacao (int x, int y){
	int resultado=0,z;
	z=x;
	for(x=0;x<z;x++)
		resultado=soma(resultado,y); //resultado+=y;
	
	return resultado;
}
int potencia (int x, int y){
	int i,j,pot=1,resultado=0;
	for(i=0;i<y;i++){
		pot=multiplicacao(pot,x);
	}
	return pot;
}
int main(void){
	int n1,n2,total;
	
	printf("Informe um numero:");
	scanf("%d",&n1);
	printf("Informe outro numero:");
	scanf("%d",&n2);
	
	total=potencia(n1,n2);
	
	printf("O resultado e:%d",total);
	return 0;
}
