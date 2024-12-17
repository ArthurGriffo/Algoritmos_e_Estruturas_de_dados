#include<stdio.h>

int main(void){
	float p1,p2,p3,media;
	
	printf("Digite 3 provas:");
	scanf("%f%f%f",&p1,&p2,&p3);
	
	media=(p1+p2+p3)/3;
	
	if(media>=60)
		printf("voce esta aprovado com media %f",media);
	else if(media<30)
		printf("voce esta reprovado com media %f",media);
	else
		printf("voce esta em recuperaçao com media %f",media);
	return 0;
}
