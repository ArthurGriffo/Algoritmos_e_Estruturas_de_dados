#include<stdio.h>

int main(void){
	float valor,d;
	
	printf("Informe um valor:");
	scanf("%f",&valor);
	
	if(valor>1000){
		d=valor*0.95;
		printf("Seu desconto e de 5%% totalizando %f",d);
	}else if(valor<=1000&&valor>5000){
		d=valor*0.9;
		printf("Seu desconto e de 10%% totalizando %f",d);
	}else{
		d=valor*0.85;
		printf("Seu desconto e de 15%% totalizando %f",d);
	}
	return 0;
}
