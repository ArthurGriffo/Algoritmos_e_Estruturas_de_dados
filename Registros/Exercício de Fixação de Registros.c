#include<stdio.h>

struct dados{
	char nome[20];
	float altura;
	float peso;
	float imc;
};
float calculoimc(float h,float p){
	float seuimc;
	
	seuimc=p/(h*h);
	
	return seuimc;
	
}
void preencher(struct dados v[]){
	int i=0;
	for(i=0;i<10;i++){
		printf("Informe o nome do aluno:");
		scanf("%s",&v[i].nome);
		printf("Informe a altura:");
		scanf("%f",&v[i].altura);
		printf("Informe a peso:");
		scanf("%f",&v[i].peso);
		
		v[i].imc=calculoimc(v[i].altura,v[i].peso);
	}
	
}
void exibir(struct dados v[]){
	int i=0;
	for(i=0;i<10;i++){
		printf("\nNome:%s",v[i].nome);
		printf("\nAltura:%f",v[i].altura);
		printf("\nPeso:%f",v[i].peso);
		printf("\nIMC:%f",v[i].imc);
	}
}
void nomemaior(struct dados v[]){
	int i,maior=0,nm;
	for(i=0;i<10;i++){
		if(v[i].imc>maior){
			maior=v[i].imc;
			nm=i;
		}
	}
	printf("\nMaior IMC:%f",v[nm].imc);
	printf("\nNome:%s",v[nm].nome);
}
int main(void){
	struct dados alunos[10];
	
	preencher(alunos);
	
	exibir(alunos);
	
	nomemaior(alunos);
	
	return 0;
	
}
