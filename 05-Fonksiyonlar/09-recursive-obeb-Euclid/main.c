/*************************************************************************
* Proje : Fonksiyonlar / Recursive / OBEB - Euclid
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

// OBEB hesaplayan recursive fonksiyon
// (Euclid Algoritmasi ile)
int obeb(int a, int b)
{
	if((a%b)==0)
		return b;
	else
		return obeb(b,a%b);
}

//-------------------------------------------

int main(int argc, char *argv[])
{
	int a,b,cevap;
	printf("A: ");	scanf("%d", &a);
	printf("B: ");	scanf("%d", &b);

	cevap = obeb(a,b);

	printf("OBEB(%d,%d) = %d\n", a,b,cevap);

	return 0;
}
