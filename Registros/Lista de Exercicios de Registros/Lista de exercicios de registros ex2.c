#include<stdio.h>

struct dados{
	int codigo;
	char descricao[40];
	float quantidade;
	float valor;
};
void inserir(struct dados v[]){
	int i;
	for(i=0;i<10;i++){
		printf("Informe o codigo do produto:");
		scanf("%d",&v[i].codigo);
		printf("Descreva o produto:");
		scanf("%s",&v[i].descricao);
		printf("Informe a quantidade do produto:");
		scanf("%f",&v[i].quantidade);
		printf("Informe o valor do produto:");
		scanf("%f",&v[i].valor);
	}
}
void exibir(struct dados v[]){
	int i;
	for(i=0;i<10;i++){
		printf("\nCodigo:%d",v[i].codigo);
		printf("\nNome:%s",v[i].descricao);
		printf("\nQuantidade:%f",v[i].quantidade);
		printf("\nValor:%f",v[i].valor);
	}
}
void caro(struct dados v[]){
	int i,maior=0;
	
	printf("\n\nProduto mais caro:\n");
	for(i=0;i<10;i++){
		if(v[i].valor>maior){
			maior=i;
		}
	}
	printf("\nCodigo:%d",v[maior].codigo);
	printf("\nDescricao:%s",v[maior].descricao);
}
void mais(struct dados v[]){
	int i,maior=0;
	
	printf("\n\nMaior produto no estoque:\n");
	for(i=0;i<10;i++){
		if(v[i].quantidade>maior){
			maior=i;
		}
	}
	printf("\nCodigo:%d",v[maior].codigo);
	printf("\nDescricao:%s",v[maior].descricao);
}
int main(void){
	struct dados produtos[10];
	
	inserir(produtos);
	exibir(produtos);
	caro(produtos);
	mais(produtos);
	
	return 0;
}
