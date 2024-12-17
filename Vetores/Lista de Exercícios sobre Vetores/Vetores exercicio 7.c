#include<stdio.h>
int main(void){
	int matriz[3][3],i=0,j=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Informe a posicao i:%d x j:%d da matriz:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++)
			if(i==j)
				printf("%d",matriz[i][j]);
	}
}
