#include <stdio.h>
#include <stdlib.h>

int a,b,c;

int main(int argc, char *argv[]) 
{
	a=6;
	b=11;
	
	if(a>5 && b<20)
	{
		printf("1. Asama\n");
		if(a<15 && b>10)
		{
			printf("2. Asama\n");
			if(a<b)
			{
				printf("3. Asama\n");
				printf("Merhaba\n");
			}
		}
	}
	
	return 0;
}
