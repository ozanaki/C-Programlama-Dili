#include <stdio.h>
#include <stdlib.h>

int a,b,c;

int main(int argc, char *argv[]) 
{
	a=10;
	b=0;
	
	printf("Once: a=%d b=%d\n",a,b);
	
	c=5+a++;
	
	printf("Sonra: a=%d b=%d\n",a,b);
	
	printf("c=%d\n",c);
	
	return 0;
}
