#include<stdio.h>

int main(void){
	int i=7;
	do{
		if(i%7==3)
			printf("%d\n",i);
		i++;
	}while(i<=1000);
}
