/*************************************************************************
* Proje : Diziler / min, max, ort
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

#define LEN 10

// diziler, ayni tipteki verilerin bellekte ardisik olarak bulundugu yapilardir.
// dizi tanimlarken, degisken adinin yanina koseli parantez icinde eleman sayisi yazilir.
// dizi elemanlarina erisirken, degisken adi yaninda koseli parantez icerisine indis numarasi yazilir.
// dizi indisleri her zaman 0'dan (sifirdan) baslar.

int i,sayilar[LEN]; // LEN uzunlugunda bir int dizisi tanimlaniyor.
int top, min, max;
float ort;

int main(int argc, char *argv[])
{
	
	for(i=0; i<LEN; i++)
	{
		printf("%d. sayiyi girin: ",i+1);
		scanf("%d", &sayilar[i]); 
		
	}
	
	// min maks bul
	min=sayilar[0];
	max=sayilar[0];
	for(i=1; i<LEN; i++)
	{
		if(min>sayilar[i]) min=sayilar[i];
		if(max<sayilar[i]) max=sayilar[i];
	}

	// toplam ve ortalama bul
	top=0;
	for(i=0; i<LEN; i++)
	{
		top+=sayilar[i];
	}
	
	ort=(float)top/LEN;
	
	printf("\n");
	printf("n: %d\n", LEN);
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	printf("top: %d\n", top);
	printf("ort: %f\n", ort);
	
  return 0;
}
