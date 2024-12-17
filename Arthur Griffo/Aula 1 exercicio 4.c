#include<stdio.h>

int main(void){
	float lado,perimetro,area;
	
	printf("informe o lado do quadrado:");
	scanf("%f",&lado);
	
	perimetro=4*lado;
	area=lado*lado;
	
	printf("Perimetro:%f\n",perimetro);
	printf("Area:%f",area);
	
	return 0;
}

