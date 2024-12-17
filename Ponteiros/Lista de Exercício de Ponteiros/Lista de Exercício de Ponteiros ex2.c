#include<stdio.h>

void troca(char string[],char *c1,char *c2){
	int j=0;
	
	*c1=string[0];
	
	do{
		j++;
	}while(string[j]!='\0');
	*c2=string[--j];
	
}
int main(void){
	char string[20],c1,c2;
	
	printf("Informe uma string:");
	scanf("%s",&string);
	
	troca(string,&c1,&c2);
	printf("C1:%c C2:%c",c1,c2);
}
