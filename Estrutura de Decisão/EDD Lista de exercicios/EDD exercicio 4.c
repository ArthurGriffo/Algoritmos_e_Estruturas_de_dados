#include<stdio.h>

int main(void){
	float q,t;
	
	printf("Informe a quantidade de tecido:");
	scanf("%f",&q);
	
	if(q>10){
		t=q*23;
		printf("Sua quantidade de tecido e %f\n",q);
		printf("O valor do m2 e 23 reais\n");
		printf("Total:%.2f",t);
	}else{
		t=q*25;
		printf("Sua quantidade de tecido e %f\n",q);
		printf("O valor do m2 e 25 reais\n");
		printf("Total:%.2f",t);}
	
	return 0;
}
