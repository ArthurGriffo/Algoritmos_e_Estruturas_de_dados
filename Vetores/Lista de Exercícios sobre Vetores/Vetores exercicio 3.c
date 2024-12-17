#include<stdio.h>
int main(void){
	int n[10],i;
	for(i=0;i<10;i++){
		printf("Digite um numero:");
		scanf("%d",&n[i]);
	}
	for(i=9;i>=0;i--){
		printf("\n%d",n[i]);
	}
	return 0;
}
