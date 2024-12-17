#include<stdio.h>
int tamanho(char string[]){
	int i=0;
	char *c;
	
	c=string;
	do{
		c++;
		i++;
		}while(*c!='\0');
		
	return i;
}
int main (void){
	char string[20];
	int tam;
	
	printf("Digite uma string:");
	scanf("%s",&string);
	
	tam=tamanho(string);
	printf("Tamanho da string:%d",tam);
	
	return 0;
}
