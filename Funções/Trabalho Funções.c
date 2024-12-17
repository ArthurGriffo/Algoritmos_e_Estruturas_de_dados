#include<stdio.h>
//Trabalho de Algoritmos e Estruturas de Dados

//Feito por Arthur Griffo de Andrade,Jefte de Deus Pires e Marcos Paulo Leitzke

//Prof. Jonathan S. Toczek 
void sair(int acoes){
	printf("\nTotal de acoes:%d",acoes);
}

void inicializar(int v[10]){
	int i;
	for(i=0;i<10;i++){
		printf("\nInforme um numero:");
		scanf("%d",&v[i]);
	}
}
void exibir(int v[10]){
	int i;
	for(i=0;i<=9;i++){
		printf("\n%d",v[i]);
	}
}
void inverter(int v[10]){
	int i;
	for(i=9;i>=0;i--){
		printf("\n%d",v[i]);
	}
}
void exibirposicao(int v[10],int posicao){
	printf("\n%d",v[posicao]);
}
void substituir(int v[10],int substituto,int posicao){
	v[posicao]=substituto;
}
void exibirmaior(int v[10]){
	int i,maior=-99999,posicao;
	for(i=0;i<10;i++){
		if(v[i]>maior){
			maior=v[i];
			posicao=i;
		}
	}
	printf("\nO maior valor do vetor e %d e sua posicao e %d",maior,posicao);
}
void exibirmenor(int v[10]){
	int i,menor=99999,posicao;
	for(i=0;i<10;i++){
		if(v[i]<menor){
			menor=v[i];
			posicao=i;
		}
	}
	printf("\nO menor valor do vetor e %d e sua posicao e %d",menor,posicao);
}
float exibirmedia(int v[10]){
	float media,soma=0;
	int i;
	for(i=0;i<10;i++){
		soma=soma+v[i];
	}
	media=soma/10;
	return media;
}
int maioreski(int v[10],int ki){
	int i,maior=0;
	for(i=0;i<10;i++){
		if(v[i]>ki)
			maior++;
	}
	return maior;
}
int menoreskj(int v[10],int kj){
	int i,menor=0;
	for(i=0;i<10;i++){
		if(v[i]<kj)
			menor++;
	}
	return menor;
}
int maiorn(int v[10],int n){
	int i,maior=0;
	for(i=n;i<10;i++){
		if(v[i]>maior)
			v[i]=maior;
	}
	return maior;
}
int menorn(int v[10],int n){
	int i,menor=999999;
	for(i=n;i<10;i++){
		if(v[i]>menor)
			menor=v[i];
	}
	return menor;
}
void permutar(int v[10],int posicao1,int posicao2){
	int aux;
	aux=v[posicao1];
	
	v[posicao1]=v[posicao2];
	v[posicao2]=aux;
}
void copiar(int v[10],int vaux[10]){
	int i;
	for(i=0;i<10;i++)
		vaux[i]=v[i];
}
void restaurar(int v[10],int vaux[10]){
	int i;
	for(i=0;i<10;i++)
		v[i]=vaux[i];
}
void ordenar(int v[10]){//erro
	int i,j,n=0;
	for(i=0;i<=9;i++){
		for(j=i+1;j<=9;j++){
			if(v[i]>v[j]){
				permutar(v,i,j);
			}
		}
	}
}
void sobre(void){
	printf("\nAutores:Arthur Griffo de Andrade e Jefte de Deus Pires");
	printf("\nLancado dia 11/10/2019");
}
int main(void){
	int x,acao,kj1,ki1,substituto1,main,menn,menores,maiores,numero1,numero2,vetor[10],vetoraux[10],posicao1,posicao2,posicao3,posicao4;
	float media1;
	do{
	printf("\n***********************************************************************************************0 ");
	printf("\n0  - SAIR DA APLICACAO");
	printf("\n1  - INICIALIZE O VETOR DE 10 POSICOES");
	printf("\n2  - EXIBA O VETOR COMPLETO");
	printf("\n3  - EXIBA O VETOR AO INVERSO");
	printf("\n4  - EXIBA NA TELA O ELEMENTO DE UMA POSICAO DO VETOR ");
	printf("\n5  - SUBSTITUA UM ELEMENTO DE UMA POSICAO DO VETOR");
	printf("\n6  - EXIBA NA TELA O MAIOR NUMERO DO VETOR E SUA POSICAO");
	printf("\n7  - EXIBA NA TELA O MENOR NUMERO DO VETOR E SUA POSICAO");
	printf("\n8  - RETORNE A MEDIA DOS NUMEROS INFORMADOS NO VETOR");
	printf("\n9  - RETORNE A QUANTIDADE DE NUMEROS DE UM INTERVALO Ki e kj");
	printf("\n10 - RETORNE A POSICAO DO MAIOR NUMERO APARTIR DE UMA POSICAO N INFORMADA ");
	printf("\n11 - RETORNE A POSICAO DO MENOR NUMERO APARTIR DE UMA POSICAO N INFORMADA");
	printf("\n12 - PERMUTA DUAS POSICOES DO VETOR");
	printf("\n13 - CRIA UMA COPIA DO VETOR");
	printf("\n14 - RESTAURA A COPIA DO VETOR");
	printf("\n15 - ORDENA O VETOR");
	printf("\n16 - SOBRE");
	
	printf("\nDIGITE A OPCAO DESEJADA : ");
	scanf("%d",&x);
	
	printf("\n***********************************************************************************************");
	
	switch (x){
		case 1:{
			inicializar(vetor);
			acao++;
			break;
		}
		case 2:{
			exibir(vetor);
			acao++;
			break;
		}
		case 3:{
			inverter(vetor);
			acao++;
			break;
		}
		case 4:{
			printf("\nInforme uma posicao de 0 a 9:");
			scanf("%d",&posicao1);
			
			exibirposicao(vetor,posicao1);
			acao++;
			break;
		}
		case 5:{
			printf("\nDigite uma posicao:");
			scanf("%d",&posicao2);
			printf("\nDigite o valor pelo qual quer substituir:");
			scanf("%d",&substituto1);
			
			substituir(vetor,substituto1,posicao2);
			acao++;
			break;
		}
		case 6:{
			exibirmaior(vetor);
			acao++;
			break;
		}
		case 7:{
			exibirmenor(vetor);
			acao++;
			break;
		}
		case 8:{
			media1=exibirmedia(vetor);
			printf("\nA media do vetor e %f",media1);
			acao++;
			break;
		}
		case 9:{
			printf("\nDigite um valor para ki e kj:");
			scanf("%d%d",&ki1,&kj1);
			
			maiores=maioreski(vetor,ki1);
			menores=menoreskj(vetor,kj1);
			acao++;
			
			printf("\nHa %d numeros maiores que ki e %d numeros menores que kj.");
			break;
		}
		case 10:{
			printf("\nDigite a posicao para verificar:");
			scanf("%d",&numero1);
			
			main=maiorn(vetor,numero1);
			printf("\n%d",main);
			
			acao++;
			break;
		}
		case 11:{
			printf("\nDigite a posicao para verificar:");
			scanf("%d",&numero2);
			
			menn=menorn(vetor,numero2);
			printf("\n%d",menn);
			
			acao++;
			break;
		}
		case 12:{
			printf("\nDigite duas posicoes para trocar:");
			scanf("%d%d",&posicao3,&posicao4);
			
			permutar(vetor,posicao3,posicao4);
			acao++;
			break;
		}
		case 13:{
			copiar(vetor,vetoraux);
			acao++;
			break;
		}
		case 14:{
			restaurar(vetor,vetoraux);
			acao++;
			break;
		}
		case 15:{
			ordenar(vetor);
			acao++;
			break;
		}
		case 16:{
			sobre();
			acao++;
			break;
		}
	}
	}while(x!=0);
	
	sair(acao);
	
	return 0;
}


