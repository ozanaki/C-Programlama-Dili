#include <stdio.h>
#include <stdlib.h>

int a,b,c;

int main(int argc, char *argv[]) 
{
	printf("a=");
	scanf("%d",&a);

	printf("b=");
	scanf("%d",&b);
	
	c=a+b;
	printf("%d+%d=%d\n",a,b,c);
	c=a-b;
	printf("%d-%d=%d\n",a,b,c);
	c=a*b;
	printf("%d*%d=%d\n",a,b,c);
	c=a/b;
	printf("%d/%d=%d\n",a,b,c);
	c=a%b;
	printf("%d%%%d=%d\n",a,b,c);
	
	c=10/(5+3)*5-2;
	printf("c=%d\n",c);
	
	return 0;
}
