#include<stdio.h>
void imprimir(char string[]){
	
	char *c;
	c=string;
	do{
		printf("\n%c",*c);
		c++;
		}while(*c!='\0');

}

int main(void){
	char string[20];
	
	printf("Informe uma string:");
	scanf("%s",&string);
	
	imprimir(string);
	
}
