#include<stdio.h>

int main (void){
	float n1,n2,mat,media,mtotal=0,aa=0,ar=0;
	int i=1;
	
	for(i=1;i<=20;i++){
		printf("\nInforme a matricula:");
		scanf("%f",&mat);
		printf("Informe duas notas:");
		scanf("%f%f",&n1,&n2);
		
		media=(n1+n2)/2;
		
		printf("\nMatricula:%.2f",mat);
		printf("\nNota final:%.2f",media);
		if(media>=60){
			printf("\nAluno aprovado");
			aa=aa+1;
		}else{
			printf("\nAluno reprovado");
			ar=ar+1;
		}
		mtotal=(mtotal+media)/20;
	}
	printf("Alunos aprovados:%.2f",aa);
	printf("Alunos reprovados:%.2f",ar);
	printf("Media de todos os alunos:%.2f",mtotal);
	return 0;
}
