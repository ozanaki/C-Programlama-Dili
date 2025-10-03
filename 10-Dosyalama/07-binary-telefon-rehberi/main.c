/*************************************************************************
* Proje : Dosyalama / binary telefon rehberi
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define DOSYA "veri.dat"
FILE* dosya;

typedef struct {
	char ad[30];
	char soyad[30];
	char tel[20];
} kayit_t;

kayit_t kayit, *tmp, *kayitlar=NULL;
unsigned int adet;

int menu();
void kayit_ekle();
void kayit_sil();
void kayit_ara();
void kayit_listele();

//===========================================================

int main(int argc, char *argv[])
{
	int i,secim;
	size_t sz;
	
	// dosyayi ac
	dosya=fopen(DOSYA, "rb+");
	if(dosya==NULL)
	{
		printf("Yeni veri dosyasi olusturuluyor.\n");
		dosya=fopen(DOSYA, "wb+");
		if(dosya==NULL)
		{
			printf("Yeni dosya acilamadi.\n");
			return -1;
		}	
	} else printf("Veri dosyasi acildi.\n");
	
	// dosyadan kayitlari yukle
	adet=0;
	while(!feof(dosya))
	{
		sz=fread(&kayit, sizeof(kayit_t),1,dosya);
		if(sz==1)
		{
			tmp = (kayit_t*)realloc(kayitlar,sizeof(kayit_t)*(adet+1));
			if(tmp!=NULL)
			{
				kayitlar=tmp;
				kayitlar[adet]=kayit;
				adet++;
			}		
		}
	}
	
	do {
		secim=menu();
		switch(secim)
		{
			case 1: { kayit_ekle(); break; }	
			case 2: { kayit_sil(); break; }	
			case 3: { kayit_ara(); break; }	
			case 4: { kayit_listele(); break; }	
		}
	} while(secim!=0);
	
	
	//kayitlari dosyaya kaydet
	fclose(dosya);
	dosya=fopen(DOSYA, "wb");
	if(dosya!=NULL)
	{
		for(i=0; i<adet; i++)
		{
			if(kayitlar[i].ad[0]=='\0') continue;
			fwrite(&kayitlar[i], sizeof(kayit_t),1,dosya);
		}
		fclose(dosya);
	}	
	free(kayitlar);
	
  return 0;
}
//===========================================================

int menu()
{
	int sec;
	printf("TELEFON REHBERI  \n");
	printf("-----------------\n");
	printf("1. Kayit ekle    \n");	
	printf("2. Kayit sil     \n");
	printf("3. Kayit ara     \n");
	printf("4. Kayit listele \n");
	printf("0. Cikis         \n");
	printf("-----------------\n");
	
	do{
		printf("\a\rSeciminiz: ");
		scanf("%d", &sec);
	} while(sec<0 || sec>4);
	
	return sec;
}
//===========================================================
void kayit_ekle()
{
	int index=0;
	while(index<adet)
	{
		if(kayitlar[index].ad[0] == '\0') break;
		index++;
	}
	
	if(index==adet)
	{
		tmp = (kayit_t*)realloc(kayitlar,sizeof(kayit_t)*(adet+1));
		if(tmp==NULL) 
		{
			printf("Yeni kayit icin bellekte yer yok!\n");
			return;
		}
		kayitlar=tmp;
	}

	printf("Ad......:"); scanf("%s", kayitlar[index].ad);
	printf("Soyad...:"); scanf("%s", kayitlar[index].soyad);
	printf("Telefon.:"); scanf("%s", kayitlar[index].tel);
	adet++;
}
//===========================================================
void kayit_sil()
{
	int sil=-1;
	printf("Silinecek kayit no: ");
	scanf("%d", &sil);
	if(sil>=0 && sil<adet)
	{
		kayitlar[sil].ad[0] = '\0';	
		printf("Kayit silindi.\n");
	}
}
//===========================================================
void kayit_ara()
{
	
}
//===========================================================
void kayit_listele()
{
	int i,sira=0;
	printf("Tum kayitlar:\n");
	for(i=0; i<adet; i++)
	{
		if(kayitlar[i].ad[0]=='\0') continue;
		printf("%d. %s %s %s\n", ++sira, 
			kayitlar[i].ad, kayitlar[i].soyad, kayitlar[i].tel);
	}
	printf("\n");
}
//===========================================================

