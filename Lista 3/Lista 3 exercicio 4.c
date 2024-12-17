#include<stdio.h>

int main(void){
	float b,h,area;
	
	printf("Informe a base:");
	scanf("%f",&b);
	printf("Informe a altura:");
	scanf("%f",&h);
	
	area=(b*h)/2;
	
	printf("A area do triangulo e igual a:%.2f",area);
	
	return 0;
}
