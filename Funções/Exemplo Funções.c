#include<stdio.h>
int soma(int a,int b){
	int s;
	s=a+b;
	return s;
}
int main(void){
	int a=2,b=5,s;
	s=soma(a,b);
	printf("A soma de A:%d com B:%d = %d",a,b,s);
}
