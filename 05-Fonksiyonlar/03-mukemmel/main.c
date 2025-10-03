/*************************************************************************
* Proje : Fonksiyonlar / mukemmel sayilar
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

#define MAX 10000

// Kendisi haric butun pozitif bolenlerinin toplami kendisine esit olan sayilara mukemmel sayi denir.

// verilen bir sayinin mukemmel sayi 
// olup olmadigini donduren fonksiyon
int mukemmel(int sayi)
{
	int i,bolenler_toplami = 1;
	for (i = 2; i <= sayi/2; i++)
	{
	    if (sayi%i == 0) bolenler_toplami += i;
	}
	if (bolenler_toplami == sayi) return 1;
	return 0;
}

//----------------------------------------------

int main(int argc, char *argv[])
{
	int i;
	
	printf("*** Mukemmel Sayilar ***\n");
  for(i=0; i<MAX; i++)
  {
		if(mukemmel(i)) printf("%d\n", i);
	}
  printf("\n");
  	
  return 0;
}
