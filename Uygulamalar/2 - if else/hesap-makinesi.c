
#include <stdio.h>
#include <stdlib.h>

int a,b;
int sonuc;
char islem;

int main(int argc, char *argv[])
{
	printf("1. sayiyi giriniz:");
	scanf("%d",&a);
	printf("2. sayiyi giriniz:");
	scanf("%d",&b);
	
	fflush(stdin);
	printf("islemi giriniz:");
	scanf("%c",&islem);

	if(islem=='+')
	{
		sonuc=a+b;
	}
	else if(islem=='-')
	{
		sonuc=a-b;
	}
	else if(islem=='*')
	{
		sonuc=a*b;
	}
	else if(islem=='/')
	{
		sonuc=a/b;
	}
	else
	{
		printf("Yanlizca + - * / dort islem giriniz.\n");
	}

	printf("Sonuc = %d\n",sonuc);

	system("pause");
	return 0;
}