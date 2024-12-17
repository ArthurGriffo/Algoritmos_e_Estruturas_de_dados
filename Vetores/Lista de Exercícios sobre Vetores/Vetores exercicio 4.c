#include<stdio.h>
int main(void){
	int i=0,v1[4],v2[4],v3[4];
	for(i=0;i<4;i++){
		printf("\nDigite o %d numero para o primeiro vetor:",i);
		scanf("%d",&v1[i]);
	}
	for(i=0;i<4;i++){
		printf("\nDigite o %d numero para o segundo vetor:",i);
		scanf("%d",&v2[i]);
	}
	for(i=0;i<4;i++){
		v3[i]=v1[i]+v2[i];
		printf("\n%d",v3[i]);
	}
	return 0;
}
