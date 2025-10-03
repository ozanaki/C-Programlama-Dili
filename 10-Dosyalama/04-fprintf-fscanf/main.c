/*************************************************************************
* Proje : Dosyalama / fprintf, fscanf
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "veri.dat"

FILE* dosya;
char ad[80],soyad[80],tel[20];

// fprintf(): dosyalara formatli text bilgi yazmak icin kullanilir.
// fscanf(): dosyalardan formati belirli text bilgi okumak ve degiskenlere aktarmak icinkullanilir.

// fprintf() ve fscanf() fonksiyonlarini format bilgileri, 
// daha once gosterilen printf() ve scanf() fonksiyonlari ile aynidir.

int main(int argc, char *argv[])
{
	dosya=fopen(FILENAME,"a+");
	if(dosya==NULL)
	{
		printf("- Dosya acilamadi.\n");
		return -1;
	}
	printf("+ Dosya basariyla acildi.\n");
	
	printf("Yeni kayit giriniz:\n");
	printf("Adi    : ");
	scanf("%s", ad);
	printf("Soyadi : ");
	scanf("%s", soyad);
	printf("Telefon: ");
	scanf("%s", tel);
	
	printf("Kayit dosyaya yaziliyor...\n");
	fprintf(dosya,"%s %s %s\n",ad,soyad,tel);

	printf("Dosyadan butun kayitlar okunuyor:\n");
	rewind(dosya); // Basa sar
	while(!feof(dosya))
	{
		fscanf(dosya,"%s %s %s\n", ad, soyad, tel);
		printf("%s %s %s\n", ad, soyad, tel);	
	}	
	printf("\nBitti.\n");
	
  return 0;
}
