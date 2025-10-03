/*************************************************************************
* Proje : Kontrol ifadeleri / switch case
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

int a;

int main(int argc, char *argv[])
{
	printf("Bir rakam giriniz:");
	scanf("%d", &a);

	// a degiskeni her case icin tek tek kontrol edilir.
	switch(a)
	{
		case 0: { printf("sifir\n"); break; }
		case 1: { printf("bir\n"); break; }
		case 2: { printf("iki\n"); break; }
		case 3: { printf("uc\n"); break; }
		case 4: { printf("dort\n"); break; }
		case 5: { printf("bes\n");  } // break olmadiginda, hem bu satir, 
									  // hem break gorunceye kadar hem sonraki case satirlari calisir
		case 6: { printf("alti\n"); }
		case 7: { printf("yedi\n"); break; }
		case 8: { printf("sekiz\n"); break; }
		case 9: { printf("dokuz\n"); break; }
		default: { printf("bilinmeyen sayi!\n"); } // hic bir kosul eslesmez ise, default calisir
	}
	
  return 0;
}
