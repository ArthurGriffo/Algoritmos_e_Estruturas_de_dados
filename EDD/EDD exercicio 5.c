#include<stdio.h>

int main(void){
	int n1,n2,acao,total;
	
	printf("Escolha 2 numeros inteiros:");
	scanf("%d%d",&n1,&n2);
	printf("1 para somar,2 para subtrair,3 para multiplicar,4 para dividir.Escolha a acao:");
	scanf("%d",&acao);
	
	switch(acao){
		case 1:
			total=n1+n2;
			printf("Resultado:%d",total);
			break;
		case 2:
			total=n1-n2;
			printf("Resultado:%d",total);
			break;
		case 3:
			total=n1*n2;
			printf("Resultado:%d",total);
			break;
		case 4:
			total=n1/n2;
			printf("Resultado:%d",total);
			break;
		default:
			printf("Operacao invalida");
			break;
	}
	

}
