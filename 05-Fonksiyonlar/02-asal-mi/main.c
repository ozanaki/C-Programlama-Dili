/*************************************************************************
* Proje : Fonksiyonlar / asal mi
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

#define MAX 1000

// 1 ve kendisi hariç baska hic bir boleni olmayan sayilara asal sayilar denir.

// parametre olarak verilen sayinin 
// asal olup olmadigini donduren fonksiyon
int asal_mi(int sayi)
{
	int i;
	if(sayi<2)
	{
		return 0;
	}
	for(i=2; i<=sayi/2; i++) 
	{
		if(sayi%i == 0)
		{
			return 0;
		}
	}
	return 1; 	
}

//-----------------------------------------

int main(int argc, char *argv[])
{
 	int i;
	printf("*** Asal sayilar ***\n");
	for(i=0; i<MAX; i++)
	{
		if(asal_mi(i)) printf("%d\n",i);
	}
		
  return 0;
}
