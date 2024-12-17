#include<stdio.h>
#include<math.h>
float distancia(double a1,double b1,double a2,double b2){
	double diferenca,j,k,f,g;
	j=a2-a1;
	k=b2-b1;
	f=pow(j,2);
	g=pow(k,2);
	diferenca=sqrt(f+g);
	//diferenca=sqrt(pow((a2-a1),2)+pow((b2-b1),2)
	return diferenca;
}
int main(void){
	int x1,x2,x3,y1,y2,y3;
	float AB,AC,BC,perimetro;
	
	printf("\nInforme um valor para x1 e y1:");
	scanf("%d%d",&x1,&y1);
	
	printf("\nInforme um valor para x2 e y2:");
	scanf("%d%d",&x2,&y2);
	
	AB=distancia(x1,y1,x2,y2);
	printf("\nA distancia AB e %.2f",AB);
	
	printf("\nInforme um valor para x3 e y3:");
	scanf("%d%d",&x3,&y3);
	
	AC=distancia(x1,y1,x3,y3);
	printf("\nA distancia AC e %.2f",AC);
	
	BC=distancia(x2,y2,x3,y3);
	printf("\nA distancia BC e %.2f",BC);
	
	perimetro=AB+AC+BC;
	printf("O perimetro do seu triangulo e %f",perimetro);
	
	return 0;
}
