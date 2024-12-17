#include <stdio.h>

int main(void){
	float altura,peso,imc;
	
	printf("Informe o peso:");
	scanf("%f",&peso);
	printf("Informe a altura:");
	scanf("%f",&altura);
	
	imc=(peso/(altura*altura));
	
	printf("Parece que seu indice de massa corporal e:%.2f",imc);
	
	return 0;
	
}
