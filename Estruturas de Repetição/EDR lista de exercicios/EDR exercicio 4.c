#include<stdio.h>

int main(void){
	int maior=0,num=0;
	do{
		printf("\nDigite um numero\nDigite 0 para sair:");
		scanf("%d",&num);
		if(num>maior)
			maior=num;
}while(num!=0);
	printf("\nMaior numero:%d",maior);
	return 0;
}
