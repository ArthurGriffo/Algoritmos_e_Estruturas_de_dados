#include<stdio.h>
int main(void){
	int v[10],i=0,p[10],qt=0;
	
	for(i=0;i<10;i++){
		printf("\nDigite um numero:");
		scanf("%d",&v[i]);
	}
	for(i=0;i<10;i++){
		if(v[i]==30){
			p[qt]=i;
			qt++;
		}
	}
	
	printf("Foram encontrados %d numeros 30 nas posicoes:",qt);
	
	for(i=0;i<qt;i++){
		printf("\t %d",p[i]);
	}
	return 0;
}
