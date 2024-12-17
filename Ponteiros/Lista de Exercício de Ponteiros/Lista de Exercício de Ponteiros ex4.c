#include<stdio.h>

void preencher(int v[10]){
	int i;
	for(i=0;i<10;i++){
		printf("Digite a posicao %d do vetor:",i);
		scanf("%d",&v[i]);
	}
}
void imprimir(int v[10]){
	int i;
	for(i=0;i<10;i++){
		printf("\n(%d):%d",i,v[i]);
	}
}
void copia(int vo[10],int vd[10]){
	int i,*c;
	c=vo;
	for(i=0;i<10;i++){
		vd[i]=*c;
		c++;
	}
	
}
int main(void){
	int vetor[10],vetorcopia[10];
	
	preencher(vetor);
	
	imprimir(vetor);
	
	copia(vetor,vetorcopia);
	
	printf("Copia do vetor:");
	imprimir(vetorcopia);
	
	return 0;
	
}
