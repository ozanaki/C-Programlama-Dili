/*************************************************************************
* Proje : Dosyalama / fgetch
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

FILE *dosya;
char ch;

int main(int argc, char *argv[])
{
	// Dosya acma modlari:
	// r: dosyayi okumak icin acar. pointer bastadir. dosya yok ise NULL doner.
	// w: dosyayi yazmak icin acar. pointer bastadir. dosya yok ise yeni acar. dosya yoksa yeni acar, varsa ustune yazar. acamazsa NULL doner
	// a: dosyaya eklemek icin acar. pointer sondadir. dosya yoksa ya da acilamazsa NULL doner.
	// r+: dosyayi hem okumak hem yazmak icin acar. pointer bastadir. dosya acilamazsa NULL doner.
	// w+: dosyayi yazmak icin acar. pointer bastadir. dosya yok ise yeni acar. dosya yoksa yeni acar, varsa ustune yazar. acamazsa NULL doner
	// a+: dosyaya eklemek icin acar. pointer sondadir. dosya yoksa ya da acilamazsa NULL doner.
	// rb: dosyayi binary (ikili) modda okumak icin acar. pointer bastadir. dosya acilamazsa NULL doner.
	// wb: dosyayi binary (ikili) modda yazmak icin acar. pointer bastadir. dosya yoksa yeni acar, varsa ustune yazar. acamazsa NULL doner
	// ab: dosyaya binary (ikili) modda eklemek icin acar. pointer sondadir. dosya yoksa yeni acar. acamazsa NULL doner
	// rb+: dosyayi binary (ikili) modda okumak ve yazmak icin acar. pointer bastadir. dosya acilamazsa NULL doner.
	// wb+: dosyayi binary (ikili) modda okumak ve yazmak icin acar. pointer bastadir. dosya yoksa yeni acar, varsa ustune yazar. acamazsa NULL doner
	// ab+: dosyaya binary (ikili) modda okumak ve eklemek icin acar. pointer sondadir. dosya yoksa yeni acar. acamazsa NULL doner

	// fopen(): verilen isimdeki dosyayi acar.
  dosya = fopen("deneme.txt","r+");
  if(dosya == NULL)
  {
		printf("- Dosya acilamadi.\n");
		return -1;
	}
	else
		printf("+ Dosya basariyla acildi.\n");	
	
	printf("Dosyanin icerigi:\n-------------------\n");
	// fgetc() ile dosyadan bir karaker okunur. dosya sonuna gelirse EOF doner.
	while((ch=fgetc(dosya)) != EOF)
	{
		putchar(ch);
	}
	printf("\n--------------------\n");
	
	// fclose(): isaretcisi verilen acik olan dosyayi kapatir.
	fclose(dosya);
	printf("+ Dosya kapatildi.\n");
	
  return 0;
}
