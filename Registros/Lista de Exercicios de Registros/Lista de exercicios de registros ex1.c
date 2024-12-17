#include<stdio.h>

struct dados{
	int matricula;
	char nome[20];
	float media;
};
void inserir(struct dados v[]){
	int i;
	for(i=0;i<10;i++){
		printf("Informe a matricula:");
		scanf("%d",&v[i].matricula);
		printf("Informe o nome:");
		scanf("%s",&v[i].nome);
		printf("Informe a media do aluno:");
		scanf("%f",&v[i].media);
	}
}
void exibir(struct dados v[]){
	int i;
	for(i=0;i<10;i++){
		printf("\nMatricula:%d",v[i].matricula);
		printf("\nNome:%s",v[i].nome);
		printf("\nMedia do aluno:%f",v[i].media);
	}
}
void abaixo(struct dados v[]){
	int i;
	
	printf("\nAlunos abaixo da media:\n");
	for(i=0;i<10;i++){
		if(v[i].media<6){
			printf("\nMatricula:%d",v[i].matricula);
			printf("\nNome:%s",v[i].nome);
		}
	}
}
int main(void){
	struct dados alunos[10];
	
	inserir(alunos);
	exibir(alunos);
	abaixo(alunos);
	
	return 0;
}
