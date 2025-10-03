/*************************************************************************
* Proje : Dosyalama / rewind, fputs, fgets
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int c;
FILE* dosya;
char dosyaadi[255];
char cumle[255];
char test[255];

int main(int argc, char *argv[])
{

	// rewind(): dosya imlecini basa goturur. (0 index)

	printf("Dosya adini giriniz: ");
	scanf("%s",dosyaadi);
	
	dosya=fopen(dosyaadi,"w+");
	if(dosya==NULL)
	{
		printf("Dosya acilamadi.\n");
		return -1;
	}  
	
	printf("Bir cumle giriniz: ");
	//fflush(stdin);
	while ((c = getchar()) != '\n' && c != EOF) { }
	gets(cumle);
	
	printf("Cumle dosyaya yaziliyor... ");
	int sonuc = fputs(cumle,dosya);
	if(sonuc!=EOF)
		printf("Basariyla yazildi.\n");
	else
		printf("Dosyaya yazilamadi!\n");
		
	printf("Dosya basa aliniyor...\n");
	rewind(dosya);
	
	printf("Dosyadan okunuyor...\n");
	fgets(test,255,dosya);
	
	printf("Dosyadan okunan string: %s\n", test);
	
	printf("Dosya kapatiliyor...\n");
	fclose(dosya);
	
  return 0;
}
