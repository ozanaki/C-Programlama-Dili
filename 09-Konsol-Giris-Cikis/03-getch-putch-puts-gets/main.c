/*************************************************************************
* Proje : Konsol IO / getch, getche, putch, gets, putss
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define LEN 100
char dizi[LEN];

int main(int argc, char *argv[])
{
	int ch;
	int i;
	
 	printf("Bir cumle giriniz:");

	// Standart giristen (klavye) tek bir karakter okumak icin
	// getc(stdin): klavyeden bir karater okur ve tus kodunu dondurur. ekrana yazar.
	// getchar(): klavyeden bir karater okur ve tus kodunu dondurur. ekrana yazar.
	// getch(): klavyeden bir karakter okur ve tus kodunu dondurur. ekrana yazmaz.
	// getche(): klavyeden bir karakter okur ve tus kodunu dondurur. ekrana yazar.

 	i=0;
 	do
 	{
		//ch=getc(stdin);
		//ch=getch(stdin);
		//ch=getche();					
		ch=getchar();
		dizi[i]=ch;
		if(i<LEN) i++;
	} while(ch!='\n');
	dizi[i]='\0';
	
	// puts(), verilen karakter dizisini ekrana yazar.
	puts("Girdiginiz cumle: ");
	//puts(dizi);
	i=0;
	while(dizi[i] != '\0')
	{
		putchar(dizi[i++]);
	} 
  
  puts("\nBaska bir cumle giriniz:");
  // gets(), klavyeden bir karakter dizisi okur ve verilen diziye yazar.
  // enter tusu ile giris sonlanir.
  gets(dizi); 
  
  puts("Girdiginiz dizi:");
  puts(dizi);
  
  return 0;
}

