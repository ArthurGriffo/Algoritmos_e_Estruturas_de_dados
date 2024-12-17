#include<stdio.h>
float imc(float p,float h){
	float resultado;
	resultado=p/(h*h);
	return resultado;
}
void situacao(float resultado){
	if(resultado<18){
		printf("Abaixo do peso");
	}else if(resultado<25){
		printf("Normal");
	}else if(resultado<30){
		printf("Sobrepeso");
	}else{
		printf("Obesidade");
	}
	
}
int main(void){
	float p,h,resultado;
	char indice;
	do{
	printf("\nDigite o peso(0 para sair):");
	scanf("%f",&p);
	printf("Digite a altura(0 para sair):");
	scanf("%f",&h);
	
	resultado=imc(p,h);
	
	printf("\nSeu imc:%.2f",resultado);
	
	situacao(resultado);
	
	}while(p!=0||h!=0);
	
	return 0;
}

