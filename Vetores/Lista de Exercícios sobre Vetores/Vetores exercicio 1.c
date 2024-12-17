#include<stdio.h>
int main(void){
	int n[10],i=0,j[10],k[10];
	
	for(i=0;i<10;i++){
		printf("\nDigite um numero:");
		scanf("%d",&n[i]);
		if(n[i]==30)
			j[i]=i;
			k[i]=n[i];
	}
	for(i=0;i<10;i++){
		if(k[i]==30)
			printf("\nA posicao %d contem o numero %d",j[i],k[i]);
	}
	return 0;
}
