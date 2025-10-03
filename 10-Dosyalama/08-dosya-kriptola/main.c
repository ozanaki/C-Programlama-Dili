/*************************************************************************
* Proje : Dosyalama / text dosya kriptola
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *dosya_oku, *dosya_yaz;
char dosyaadi_oku[255], dosyaadi_yaz[255];
int key;

int main(int argc, char *argv[])
{
	char sec,coz;
	unsigned char c;
	int say;
	
	printf("1. Dosya kriptola\n");
	printf("2. Dosya kriptosunu coz\n");
	printf("0. Cikis\n");
	do {
	printf("\a\rSeciminiz: ");
	sec=getchar();
	if(sec=='0') return 0;
	} while(sec!='1' && sec!='2');
	
	if(sec=='1') coz=0;
	if(sec=='2') coz=1;
	
	printf("\nDosya adi:");
	scanf("%s", dosyaadi_oku);
  
	dosya_oku=fopen(dosyaadi_oku,"rb");
	if(dosya_oku==NULL)
	{
		printf("- dosya acilamadi.\n");
		return -1;	
	}
	
	char *ext=strstr(dosyaadi_oku,".");
	int dot=strlen(dosyaadi_oku)-strlen(ext);
	strncpy(dosyaadi_yaz,dosyaadi_oku,dot);
		
	if(coz) strcat(dosyaadi_yaz,"_decrypted.txt");
	else strcat(dosyaadi_yaz,"_crypted.txt");
	
	dosya_yaz=fopen(dosyaadi_yaz,"wb");
	if(dosya_yaz==NULL)
	{
		printf("- dosya olusturulamadi.\n");
		return -1;
	}
  
  printf("Anahtari giriniz: ");
  scanf("%d", &key);
  
	if(coz) printf("Kripto cozuluyor...\n");
	else printf("Kriptolaniyor...\n");

  while(!feof(dosya_oku))
  {
		say=fread(&c,1,1,dosya_oku);
		if(say==1)
		{
			if(coz)
			{
				c = ~c;
				c = c - key;
			} else {
				c = c + key;
				c = ~c;
			}
			fwrite(&c,1,1,dosya_yaz);	
		}
	}
  printf("Bitti.\n");
  
  fclose(dosya_oku);
  fclose(dosya_yaz);
  
  return 0;
}
