#include<stdio.h>

int main(void){
	int *p,a=1,b=2;
	
	printf("&p:%x, &a:%x, &b:%x",&p,&a,&b);
	
	p=&a;
	
	printf("\np:%x, a:%d, b:%d",p,a,b);
	
	printf("\n*p:%d, a:%d, b:%d",*p,a,b);
	
	*p=b;
	
	printf("\n*p:%d, a:%d, b:%d",*p,a,b);
}
