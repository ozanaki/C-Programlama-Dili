/*************************************************************************
* Proje : Kontrol ifadeleri / do while
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int ara, say, r;

int main(int argc, char *argv[])
{
  
  // do-while dongusu, genelde kosulu baslangicta belli olmayan ve 
  // ne kadar donulecegi de ilk anda belli olmayan yerlerde kullanilir.

  r=0;
  ara=10;
  say=0;

  do {
    say++;
    r=rand()%20;
		printf("%d verisi araniyor: %d\n",ara, r);
	} while(r != ara);
	
  printf("%d verisi %d aramada bulundu. \n",ara, say);

  return 0;
}
