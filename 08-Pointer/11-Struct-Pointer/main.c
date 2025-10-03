/*************************************************************************
* Proje : Pointer / Struct Pointer
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define LEN 3

typedef struct {
	char adsoyad[80];
	char tcno[11];
	float puan;
} kayit_t;

int i;
kayit_t *pkayit; // kayit_t tipine isaret eden bir pointer tanimliyoruz
kayit_t	kayitlar[LEN]; // kayitlar LEN uzunlugunda bir dizide tutulacak

// bu fonksiyon, dizi icerisindeki \n ve \r ozel karakterleri temizler
void clean_str(char *str)
{
	while(*str)
	{
		if(*str=='\n' || *str=='\r') *str='\0';
		str++;
	}
}

int main(int argc, char* argv[])
{

	printf("%d Adet kayit giriniz:\n", LEN);

	for(i=0; i<LEN; i++)
	{
		printf("\n%d. Kayit\n",i+1);
		printf("Ad Soyad : ");
		fgets(kayitlar[i].adsoyad,sizeof(kayitlar[i].adsoyad),stdin);
		clean_str(kayitlar[i].adsoyad);
		printf("TC No    : ");
		scanf("%s%*c",kayitlar[i].tcno);
		printf("Puan     : ");
		scanf("%f%*c", &kayitlar[i].puan);
	}
	printf("\n\n");

	pkayit = kayitlar;

	for(i=0; i<LEN; i++)
	{
		printf("%d --> %s %s %3.2f \n",i, pkayit->tcno, pkayit->adsoyad, pkayit->puan);
		pkayit++;
	}

	return 0;
}

