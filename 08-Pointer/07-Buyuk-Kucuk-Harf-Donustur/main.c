/*************************************************************************
* Proje : Pointer / Buyuk Kucuk harf donustur
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Bu ornekte ASCII kodlari  kullanilarak islem yapilmistir. 
// Bu nedenle Turkce ve ozel karakterler calismaz.

void buyuk_harf_yap(char *str)
{
	while(*str)
	{
		if((*str>='a') && (*str<='z')) *str-='a'-'A';
		str++;
	}
}

void kucuk_harf_yap(char *str)
{
	while(*str)
	{
		if((*str>='A') && (*str<='Z')) *str+='a'-'A';
		str++;
	}
}

int main(int argc, char* argv[])
{
	char adsoyad[80];
	char buffer[80];

	printf("Ad Soyad giriniz: ");
	fgets(adsoyad,80,stdin);

	strcpy(buffer,adsoyad);
	buyuk_harf_yap(buffer);
	printf("Buyuk harf: %s", buffer);

	strcpy(buffer,adsoyad);
	kucuk_harf_yap(buffer);
	printf("Kucuk harf: %s", buffer);

	return 0;
}

