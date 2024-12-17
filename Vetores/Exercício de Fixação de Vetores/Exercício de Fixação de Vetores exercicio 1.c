#include<stdio.h>
int main(void){
	float n1,n2,media[10],mg,soma=0,acima=0,abaixo=0;
	int i=0;
	
	for(i=0;i<10;i++){
		printf("Informe duas notas:");
		scanf("%f%f",&n1,&n2);
	
		media[i]=(n1+n2)/2;
	
		soma=soma+media[i];
	}
	mg=soma/10;
	for(i=0;i<10;i++){
		if(media[i]>=mg)
			acima++;
		if(media[i]<mg)
			abaixo++;
	}
	printf("Media da turma:%f\nAlunos acima da media:%f\nAlunos abaixo da media:%f",mg,acima,abaixo);
	return 0;
}
