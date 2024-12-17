#include<stdio.h>

int main(void){
	float t;
	
	printf("Informe a temperatura:");
	scanf("%f",&t);
	
	if(t<=0)
		printf("Esta congelando");
	else if(t>0&&t<=20)
		printf("Esta frio");
	else if(t>20&&t<=28)
		printf("Esta normal");
	else if(t>28&&t<=38)
		printf("Esta quente");
	else
		printf("Esta muito quente");
	return 0;
}
