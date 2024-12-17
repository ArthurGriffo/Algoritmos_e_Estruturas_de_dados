#include<stdio.h>

struct dados{
	int numero;
	char nome[60];
	float saldo;
};
void inserir(struct dados v[]){
	int i;
	for(i=0;i<10;i++){
		printf("\nInforme o numero da conta:");
		scanf("%d",&v[i].numero);
		printf("Informe o nome do correntista:");
		scanf("%s",&v[i].nome);
		printf("Informe o saldo:");
		scanf("%f",&v[i].saldo);
	}
}
void exibir(struct dados v[]){
	int i;
	for(i=0;i<10;i++){
		printf("\n\nNumero da conta:%d",v[i].numero);
		printf("\nNome do correntista:%s",v[i].nome);
		printf("\nSaldo:%f",v[i].saldo);
	}
}
void saldototal(struct dados v[]){
	int i;
	float soma=0;
	for(i=0;i<10;i++){
		soma+=v[i].saldo;
	}
	printf("\n\nSaldo total do banco:RS%.2f",soma);
}
void debito(struct dados v[]){
	int i;
	printf("\n\nClientes com debito:\n");
	for(i=0;i<10;i++){
		if(v[i].saldo<0){
			printf("\n\nNumero da conta:%d",v[i].numero);
			printf("\nNome do correntista:%s",v[i].nome);
			printf("\nSaldo:%f",v[i].saldo);
		}	
	}
}
int main(void){
	struct dados clientes[10];
	
	inserir(clientes);
	
	exibir(clientes);
	
	saldototal(clientes);
	
	debito(clientes);
	
	return 0;
	
}
