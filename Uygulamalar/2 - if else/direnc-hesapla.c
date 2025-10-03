#include <stdio.h>
#include <stdlib.h>

float v,i,r;

int main(int argc, char *argv[]) 
{
	printf("Gerilim (V) : ");
	scanf("%f",&v);

	printf("Akim (A) : ");
	scanf("%f",&i);
	
	r=v/i;
	if(r >= 1000000)
	{
		r = r / 1000000;
		printf("Direnc = %.3fMohm\n",r);
	}
	else if(r >= 1000)
	{
		r = r / 1000;
		printf("Direnc = %.3fkohm\n",r);
	}
	else
	{
		printf("Direnc = %.3fohm\n",r);	
	}
	
	return 0;
}
