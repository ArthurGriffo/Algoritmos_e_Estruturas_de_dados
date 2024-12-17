#include<stdio.h>

void somamultiplica(int *a,int *b){
	int aux=*a;
	*a=*a+*b;
	*b=aux*(*b);

}
int main(void){
	int a,b;
	printf("Digite o valor para A e B:");
	scanf("%d%d",&a,&b);
	
	somamultiplica(&a,&b);
	printf("A:%d B:%d",a,b);
	
}
