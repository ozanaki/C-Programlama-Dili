/*************************************************************************
* Proje : Dosyalama / text telefon rehberi
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERIDOSYASI "veri.dat"
#define GECICIDOSYA "temp.dat"

FILE *dosya, *gecici;
char ad[80],soyad[80],tel[80];

int c,menu();
void kayit_ekle();
void kayit_sil();
void kayit_ara();
void kayit_listele();

//----------------------------------------------------
int main(int argc, char *argv[])
{
	int secim;
	
	dosya = fopen(VERIDOSYASI,"r+");
	if(dosya==NULL)
	{
		printf("+ Veri dosyasi ilk defa olusturuluyor...\n");
		dosya = fopen(VERIDOSYASI,"w+");
		if(dosya==NULL)
		{
			printf("- Veri dosyasi olusturulamadi.\n");
			return -1;
		}
		printf("+ Yeni veri dosyasi olusturuldu.\n");
	} else printf("+ Veri dosyasi acildi.\n");
	
	do
	{
		secim=menu();
		switch(secim)
		{
			case 1: { kayit_ekle(); break; }
			case 2: { kayit_sil(); break; }
			case 3: { kayit_ara(); break; }
			case 4: { kayit_listele(); break; }
		}		
	} while(secim!=0);
	
	if(fclose(dosya)==EOF)
		printf("- Veri dosyasi kapatilamadi.\n");
	else 
		printf("+ Veri dosyasi basariyla kapatildi.\n");
		
  return 0;
}
//----------------------------------------------------
int menu(void)
{
	int sec;
	printf("T E L E F O N  R E H B E R I\n");
	printf("----------------------------\n");
	printf("1. Kayit Ekle\n");
	printf("2. Kayit Sil\n");
	printf("3. Kayit Ara\n");
	printf("4. Kayit Listele\n");
	printf("0. Cikis\n");
	printf("----------------------------\n");
	do
	{
		printf("\a\rSeciminiz (1,2,3,4,0): ");
		scanf("%d",&sec);
	} while(sec<0 || sec>4);
	
	return sec;
}
//----------------------------------------------------
void kayit_ekle()
{
	printf("Ad......: "); scanf("%s",ad);
	printf("Soyad...: "); scanf("%s",soyad);
	printf("Telefon.: "); scanf("%s",tel);
	fseek(dosya, 0, SEEK_END);
	fprintf(dosya, "%s %s %s\n",ad,soyad,tel);
}
//----------------------------------------------------
void kayit_sil()
{
	int sira,kayit;
	printf("Silinecek kayit no: ");
	scanf("%u", &kayit);
	
	gecici=fopen(GECICIDOSYA, "w+");
	if(gecici==NULL)
	{
		printf("Kayit silinemedi.\n");
		return;
	}
	
	sira=1;
	rewind(dosya);
	while(!feof(dosya))
	{
		fscanf(dosya,  "%s %s %s\n", ad, soyad, tel);
		if(sira!=kayit)
			fprintf(gecici,"%s %s %s\n", ad, soyad, tel);
		sira++;
	}
	fclose(dosya);
	fclose(gecici);
	remove(VERIDOSYASI);
	rename(GECICIDOSYA, VERIDOSYASI);
	dosya=fopen(VERIDOSYASI, "r+");
	if(dosya!=NULL) printf("+ Kayit basariyla silindi.\n");
}
//----------------------------------------------------
void kayit_ara()
{
	int sira=1;
	char aranan[80];
	printf("Aranan ismi giriniz: ");
	scanf("%s", aranan);
	
	printf("Benzesen kayitlar:\n");
	rewind(dosya);
	while(!feof(dosya))
	{
		fscanf(dosya,"%s %s %s\n", ad, soyad, tel);
		if(strcmp(aranan, ad)==0 || strcmp(aranan, ad)==0)
		{
			printf("%d. %s %s %s\n", sira++, ad, soyad, tel);	
		}	
	}
}
//----------------------------------------------------
void kayit_listele()
{
	int sira=1;
	rewind(dosya);
	printf("+ Kayitlar:\n");
	while(!feof(dosya))
	{
		fscanf(dosya,"%s %s %s\n", ad, soyad, tel);
		printf("%d. %s %s %s\n", sira++, ad, soyad, tel);
	}
	printf("+ Bitti.\n");
}
//----------------------------------------------------
