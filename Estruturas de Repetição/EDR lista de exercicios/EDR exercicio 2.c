#include<stdio.h>

int main(void){
	int n=0,s=0;
	do{
		s=s+n;
		printf("\nDigite um numero\nDigite -1 para encerrar ou outro numero para continuar:");
		scanf("%d",&n);
	}while(n!=-1);
	printf("Soma total:%d",s);
	return 0;
}
