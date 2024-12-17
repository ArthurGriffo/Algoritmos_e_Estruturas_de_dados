#include<stdio.h>

int main(void){
	float p1,p2,p3,media;
	//entrada
	printf("informe a prova 1:");
	scanf("%f",&p1);
	printf("informe a prova 2:");
	scanf("%f",&p2);
	printf("informe a prova 3:");
	scanf("%f",&p3);
	
	//processamento
	media=(p1+p2+p3)/3;
	
	//saída
	printf("media:%.2f",media);
	
	return 0;
	
}
