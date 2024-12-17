#include<stdio.h>
int main(void){
	float n[200],ki,kj;
	int i=0,maior=0,menor=0;
	
	printf("Digite um valor para ki:");
	scanf("%f",&ki);
	printf("Digite um valor para kj:");
	scanf("%f",&kj);
	
	for(i=0;i<200;i++){
		printf("Digite um numero:");
		scanf("%f",&n[i]);
		
		if(n[i]>ki)
			maior++;
		if(n[i]<kj)
			menor++;
	}
	printf("\nMaiores que ki:%d\nMenor que kj:%d",maior,menor);
}
