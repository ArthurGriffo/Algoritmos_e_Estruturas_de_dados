#include<stdio.h>

int main(void){
	float alt,maior=0,menor=999,soma=0,media;
	int i=1;
	for(i=1;i<=20;i++){
		printf("Informe a altura:");
		scanf("%f",&alt);
		
		soma=soma+alt;
		if(alt>maior)
			maior=alt;
		if(alt<menor)
			menor=alt;
	}
	media=(soma)/20;
	printf("\nMaior altura:%f",maior);
	printf("\nMenor altura:%f",menor);
	printf("\nMedia das alturas:%f",media);
	return 0;
}
