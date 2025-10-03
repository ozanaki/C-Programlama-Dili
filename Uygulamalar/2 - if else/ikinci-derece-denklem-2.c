#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c;
float delta;
float x1,x2;

int main(int argc, char *argv[]) 
{
	printf("ax2 + bx + c = 0 denklemi icin:\n");
	printf("a="); scanf("%f",&a);
	printf("b="); scanf("%f",&b);
	printf("c="); scanf("%f",&c);
	
	delta = b*b - 4*a*c;
	
	if(delta > 0)
	{
		printf("2 gercek kok vardir.\n");
		
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		
		printf("x1=%.2f  x2=%.2f\n",x1,x2);
	}
	else if(delta == 0)
	{
		printf("1 gercek kok vardir.\n");
		
		x1 = (-b+sqrt(delta))/(2*a);
		
		printf("x=%.2f\n",x1);
	}
	else
	{
		printf("Gercek kok yoktur.\n");	
	}
	
	return 0;
}
