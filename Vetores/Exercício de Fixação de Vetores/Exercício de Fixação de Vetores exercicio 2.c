#include<stdio.h>

int main (void){
	int i=0,id[10],mid,soma=0,acima=0,abaixo=0;
	for(i=0;i<10;i++){
		printf("\nDigite a idade:");
		scanf("%d",&id[i]);
		
		if(id[i]<18){
			printf("Menor de idade");
		}else{
			printf("Maior de idade");
		}
		soma+=id[i];
	}
	mid=soma/10;
	for(i=0;i<10;i++){
		if(id[i]>mid)
			acima++;
		if(id[i]<mid)
			abaixo++;
	}
	printf("\nMedia das idades:%d\nPessoas acima da media:%d\nPessoas abaixo da media:%d",mid,acima,abaixo);
	

}
