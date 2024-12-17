#include<stdio.h>
#include<string.h>
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
