#include<stdio.h>
int main(void){
	char vetorvogais[5];
	int i=0,k=0,j=0;
	vetorvogais[0]='a';
	
	vetorvogais[1]='e';
	
	vetorvogais[2]='i';
	
	vetorvogais[3]='o';
	
	vetorvogais[4]='u';
		
	
	for(i=0;i<5;i++){
		printf("\n");
		for(j=0;j<=i;j++)
			printf("%c",vetorvogais[j]);
		
	}
}
