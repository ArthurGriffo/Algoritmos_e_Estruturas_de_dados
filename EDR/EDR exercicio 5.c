#include<stdio.h>

int main(void){
	double graos=1,i=1;
	do{
		printf("\n%.2f",graos);
		graos=graos*2;
		i++;
	}while(i<=64);
}
