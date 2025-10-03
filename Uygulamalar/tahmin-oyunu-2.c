#include <stdio.h>
#include <stdlib.h>

int sayi,tahmin,sayac;

int main(int argc, char *argv[]) 
{
	srand(time(NULL));
	sayi=rand()%1001;
	printf("0 ile 1000 arasinda bir sayi tuttum. Hadi tahimn et..\n");

	do {

	printf("Tahmininiz : ");
	scanf("%d",&tahmin);
	
	sayac++;
	
	if(tahmin < sayi)
	{
		printf("Tahminin tuttugum sayidan KUCUK\n");
	}
	else if(tahmin > sayi)
	{
		printf("Tahminin tuttugum sayidan BUYUK\n");
	}
	else
	{
		printf("Tebrikler, %d tahminde BILDINIZ\n",sayac);
	}
	
	} while(tahmin != sayi);
	
	return 0;
}
