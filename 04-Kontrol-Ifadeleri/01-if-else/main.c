/*************************************************************************
* Proje : Kontrol ifadeleri / if else
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

int a,b,c;
int main(int argc, char *argv[])
{
	a=3; b=5; c=7;

	// Kosul dogru oldugunda if blogundaki kod calisir, degilse calismaz
	if(a < b)
	{
		printf("(a < b) --> dogru\n");
	}

	// Kosul dogru oldugunda if blogundaki kod calisir,
	// degilse else blogundaki kod calisir
	if(b < c)
	{
		printf("(b < c) --> dogru\n");
	}
	else
	{
		printf("(b < c) --> yanlis\n");
	}
  
	if(a < b) // Kosul dogru ise if blogundaki kod calisir
	{
		printf("a<b\n");
	}
	else if(b < c) // Yukaridaki kosul dogru degilse, else'deki kosul kontrol edilir
	{
		printf("b<c\n");
	}
  	else // Yukaridaki kosullardan hic biri dogru degilse en son else blogundaki kod calisir
	{
		printf("!(a<b) && !(b<c)\n");
	} 


	// Eger her if ifadesinde bir adet satir varsa, kume parantezleri kullanilmayabilir.
	// Bu if yukaridakinin aynisidir.
	if(a<b) printf("a<b\n");
		else if(b<c) printf("b<c\n");
			else printf("!(a<b) && !(b<c)\n");
  
  return 0;
}
