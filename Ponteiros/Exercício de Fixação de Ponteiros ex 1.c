#include<stdio.h>

void troca(int a,int b){
	int aux=a;
	
	a=b;
	b=aux;
}
void troca2(int *a,int *b){
	int aux=*a;
	
	*a=*b;
	*b=aux;	
	
}
int main (void){
	int a=1,b=2;
	
	troca(a,b);
	printf("A:%d e B:%d",a,b);
	
	troca2(&a,&b);
	printf("\nA:%d e B:%d",a,b);

	return 0;
}

