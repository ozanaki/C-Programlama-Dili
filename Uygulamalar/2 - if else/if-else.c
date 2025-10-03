#include <stdio.h>
#include <stdlib.h>

int a,b,c;

int main(int argc, char *argv[]) 
{
	printf("a=");
	scanf("%d",&a);

	printf("b=");
	scanf("%d",&b);
	
	if(a < b)
	{
		printf("a sayisi b den kucuktur\n");
	}
	else if(a > b)
	{
		printf("a sayisi b den buyuktur\n");
	}
	else
	{
		printf("a sayisi b sayisina esittir\n");
	}
	
	return 0;
}
