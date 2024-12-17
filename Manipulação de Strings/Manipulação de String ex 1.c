#include<stdio.h>
void strcpy (char destino[],char origem[]){
	int i=0,j=0;
	while(destino[i]!='\0')
		i++;
	
	while(origem[j]!='\0'){
		destino[i+j]=origem[j];
		j++;
	}
	destino[i+j]=origem[j];
}

int main (void){
	char nome[20]="Arthur",sobrenome1[20]="Griffo",ultimonome[20]="de Andrade",nomecompleto[100],nreferencia[100];
	int n;
	
	strcpy(nomecompleto,nome);
	strcat(nomecompleto," ");
	strcat(nomecompleto,sobrenome1);
	strcat(nomecompleto," ");
	strcat(nomecompleto,ultimonome);
	
	printf("%s",nomecompleto);
	
	n=strlen(nomecompleto);
	
	printf("\n%d",n);
	
	strcpy(nreferencia,"[");
	strcat(nreferencia,ultimonome);
	strcat(nreferencia,"]");
	strcat(nreferencia," ");
	strncat(nreferencia,nome,1);
	strcat(nreferencia," ");
	strncat(nreferencia,sobrenome1,1);
	
	printf("\n%s",nreferencia);
	return 0;
}
