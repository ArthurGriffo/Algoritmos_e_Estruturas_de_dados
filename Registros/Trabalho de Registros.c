#include<stdio.h>
struct dados{
	int matricula;
	char nome[60];
	float nota1;
	float nota2;
	float media;
	int situacao;
};

Qtalunos=0;


void sair(int acoes){//Pronto - Não verificado
	printf("\nTotal de acoes:%d",acoes);
}
float med(float n1,float n2){//Pronto - Não verificado
	int m;
	return m=(n1+n2)/2;
}
int sit(float media){//Pronto - Não verificado
	if(media>6)
		printf("1 - Aprovado");
		
	else
		printf("2 - Reprovado");
}
void inserirum(struct dados v[]){//Pronto - Não verificado
	int i;
	i=Qtalunos;
	/*printf("Insira a posicao que quer inserir:");
	scanf("%d",&i);*/
	printf("\nInforme a matricula:");
	scanf("%d",&v[i].matricula);
	printf("\nInforme o nome do aluno:");
	scanf("%d",&v[i].nome);
	Qtalunos++;
}
void inserirvarios(struct dados v[]){//Pronto - Não verificado
	int i,c;
	
	do {
		printf("Digite a matricula ou 0 para sair):");
	    scanf("%d",&c);
		if (!c) {	
			v[Qtalunos].matricula=c;
			printf("\nInforme o nome do aluno:");
			scanf("%d",v[i].nome);
			Qtalunos++;
		}
	}while(c);
}
void imprimirum(struct dados v[]){//Pronto - Não verificado
	int i;
	
	printf("\nInforme a posicao do aluno:");
	scanf("%d",&i);
	printf("\nA matricula e 20191ENGEL%d",v[i].matricula);
	printf("\nO nome do aluno e %c",v[i].nome);
	printf("\nA primeira nota do aluno foi %f",v[i].nota1);
	printf("\nA segunda nota do aluno foi %f",v[i].nota2);
	printf("\nA media do aluno foi %f",v[i].media);
}

void imprimirrelacao(struct dados v[]){//Pronto - Não verificado
	int i;
	
	do{
		printf("\nMatricula:20191ENGEL%d",v[i].matricula);
		printf("\nNome:%c\n",v[i].nome);
		i++;
	}while(i!=Qtalunos);
}
void inserirnota1(struct dados v[]){//Pronto - Não verificado
	int i,x;
	printf("Informe o numero da matricula do aluno:");
	scanf("%d",&x);
	
	for(i=0;i<3;i++){
		if(v[i].matricula==x){
			printf("Insira a nota 1 do aluno:");
			scanf("%f",&v[i].nota1);
		}
	}
	/*do{
		printf("Insira a posicao do aluno:");
		scanf("%d",&i);
	
		imprimirum(v[i]);
		printf("Se este e seu aluno digite 0");
		scanf("%d",&x);
	while(x==0);
	printf("Insira a nota 1 do aluno:");
	scanf("%d",&v[i].nota1);*/
}

void inserirtodosnota1(struct dados v[]){//Pronto - Não verificado
	int i;
	for(i=0;i<3;i++){
		printf("Insira a nota 1 do aluno %d:",v[i].matricula);
		scanf("%f",&v[i].nota1);
	}
}
void inserirnota2(struct dados v[]){
	int i,x;
	printf("Informe o numero da matricula do aluno:");
	scanf("%d",&x);
	
	for(i=0;i<3;i++){
		if(v[i].matricula==x){
			printf("\nInsira a nota 2 do aluno:");
			scanf("%f",&v[i].nota2);
			
			v[i].media=med(v[i].nota1,v[i].nota2);
			printf("\nA media do aluno e %f",v[i].media);
			
			sit(v[i].media);
		}
	}
}
void inserirtodosnota2(struct dados v[]){
	int i;
	
	for(i=0;i<3;i++){
		printf("\nA matricula e 20191ENGEL%d",v[i].matricula);
		printf("\nO nome do aluno e %c",v[i].nome);
		printf("\nA primeira nota do aluno foi %f",v[i].nota1);
		printf("\nInsira a nota 2:");
		scanf("%f",&v[i].nota2);
	}
	
}
void sobre(){
	printf("\nTrabalho de Algoritmos e Estruturas de Dados");
	printf("\nFeito por Arthur Griffo de Andrade,Jefte de Deus Pires e Marcos Paulo Leitzke");
	printf("\nProf. Jonathan S. Toczek"); 
}
int main (void){
	struct dados alunos[3];
	int x,acao;
	
	printf("\n----------------------------- SISTEMA DE ALUNOS ------------------------------------------------");
	printf("\n0 - SAIR DA APLICACAO");
	printf("\n1 - INSERIR UM ALUNO");
	printf("\n2 - INSERIR VARIOS ALUNOS");
	printf("\n3 - EXIBIR OS DADOS DE UM ALUNO");
	printf("\n4 - EXIBIR A RELACAO DE ALUNOS");
	printf("\n5 - REGISTRAR A 1 NOTA DE UM ALUNO");
	printf("\n6 - REGISTRAR A 1 NOTA DE TODOS OS ALUNOS");
	printf("\n7 - REGISTRAR A 2 NOTA DE UM ALUNO");
	printf("\n8 - REGISTRAR A 2 NOTA DE TODOS OS ALUNOS");
	printf("\n9 - EXIBIR A MEDIA E A SITUACAO DE UM ALUNO");
	printf("\n10 - EXIBIR A MEDIA E A SITUACAO DE TODOS OS ALUNOS");
	printf("\n11 - EXIBIR TODOS OS ALUNOS APROVADOS");
	printf("\n12 - EXIBIR TODOS OS ALUNOS REPROVADOS");
	printf("\n13 - SOBRE");
	printf("\n------------------------------------------------------------------------------------------------");
	printf("\nInforme seu comando:");
	scanf("%d",&x);
	
	switch (x){
		case 1:{
			inserirum(alunos);
			acao++;
			break;
		}
		case 2:{
			inserirvarios(alunos);
			acao++;
			break;
		}
		case 3:{
			imprimirum(alunos);
			acao++;
			break;
		}
		case 4:{
			imprimirrelacao(alunos);
			acao++;
			break;
		}
		case 5:{
			inserirnota1(alunos);
			acao++;
			break;
		}
		case 6:{
			inserirtodosnota1(alunos);
			acao++;
			break;
		}
		case 7:{
			inserirnota2(alunos);
			acao++;
			break;
		}
		case 8:{
			inserirtodosnota2(alunos);
			acao++;
			break;
		}
		case 9:{
			
			acao++;
			
			break;
		}
		case 10:{
			
			acao++;
			break;
		}
		case 11:{
			
			acao++;
			break;
		}
		case 12:{
			
			acao++;
			break;
		}
		case 13:{
			sobre();
			acao++;
			break;
		}
	}while(x!=0);
	
	sair(acao);
	
	return 0;
	
}
