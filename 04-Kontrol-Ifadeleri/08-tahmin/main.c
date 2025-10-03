/*************************************************************************
* Proje : Kontrol ifadeleri / tahmin oyunu
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sayi,tahmin,sayac;

int main(int argc, char *argv[])
{
	srand(time(NULL));
	sayi = rand()%100;
	printf("0 ile 100 arasinda Bir sayi tuttum. tahmin et...\n");
	do
	{
		printf("Tahminin: ");
		scanf("%d", &tahmin);
		
		if(tahmin > sayi) printf("Tahminin tuttugum sayidan BUYUK.\n");
		if(tahmin < sayi) printf("Tahminin tuttugum sayidan KUCUK.\n");
		
		sayac++;
		
	} while(sayi!=tahmin);
	
	printf("Tebrikler %d tahminde bildin.\n", sayac);
	  	
  return 0;
}
