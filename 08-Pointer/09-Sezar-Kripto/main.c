/*************************************************************************
* Proje : Pointer / Sezar Kripto
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void kriptola(char *str, int key)
{
	while(*str)
	{
		*str+=key;
		str++;
	}
}

void kripto_coz(char *str, int key)
{
	while(*str)
	{
		*str-=key;
		str++;
	}
}

char cumle[255];
int anahtar;

int main(int argc, char* argv[])
{

	printf("Bir cumle giriniz: ");
	fgets(cumle,255,stdin);

	printf("anahtar sayiyi giriniz: ");
	scanf("%d", &anahtar);

	printf("Orijinal cumle: %s\n", cumle);

	kriptola(cumle, anahtar);
	printf("Kriptolu cumle: %s\n", cumle);

	kripto_coz(cumle, anahtar);
	printf("Cozulmus cumle: %s\n", cumle);

	return 0;
}

