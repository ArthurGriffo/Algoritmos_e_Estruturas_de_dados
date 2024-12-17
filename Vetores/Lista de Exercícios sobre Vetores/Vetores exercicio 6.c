#include<stdio.h>
int main(void){
	int matriz[10][10],i=0,j=0;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("Informe a posicao i:%d x j:%d da matriz:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<10;i++){
		printf("\n");
		for(j=0;j<10;j++)
			printf("\t%d",matriz[i][j]);
	}
}
