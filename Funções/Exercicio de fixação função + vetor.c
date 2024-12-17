#include<stdio.h>
void inicializa(int v[10]){
	int i;
	for(i=0;i<10;i++){
		printf("\nInforme um numero:");
		scanf("%d",&v[i]);
	}
}
void exibe(int v[10]){
	int i;
	printf("\nVetor Completo:");
	for(i=0;i<10;i++){
		printf("\n(%d): %d",i,v[i]);
	}
}
int busca(int v[10],int x){
	int i,j=-1;
	for(i=0;i<10;i++){
		if(v[i]==x){
			j=i;
			break;
		}
	}
	return j;
}
int altera(int v[10],int substituto1,int valor1){
	int posicao,r;
	
	posicao=busca(v,valor1);
	if(posicao==-1)
		r=-1;
	else{
		v[posicao]=substituto1;
		r=1;
	}
	
	return r;
}

int main(void){
	int vetor[10],k,t,d,valor,substituto;
	
	inicializa(vetor);
	
	exibe(vetor);
	
	printf("\nDigite valor desejada:");
	scanf("%d",&k);
	
	t=busca(vetor,k);
	
	printf("\n %d",t);
	
	printf("\nDigite o valor do vetor que deseja alterar:");
	scanf("%d",&valor);
	printf("\nDigite o valor pelo qual deseja substituir:");
	scanf("%d",&substituto);
	
	d=altera(vetor,substituto,valor);
	
	printf("\n %d",d);
		
	return 0;
}
