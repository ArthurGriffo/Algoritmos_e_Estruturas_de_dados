#include <stdio.h>

int main(void){
	int j,inc,final;
	
	printf("Informe o inicio da sequencia:");
	scanf("%d",&j);
	printf("Informe o quanto voce quer incrementar:");
	scanf("%d",&inc);
	printf("Informe o final da sequencia:");
	scanf("%d",&final);
	
	do{
		printf("\n%d",j);
		j=(j+inc);
	}while(j<=final);
	return 0;
}
