/*************************************************************************
* Proje : Kontrol ifadeleri / while
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

  // while dongusu, genelde kosulu baslangicta belli olan ancak
  // ne kadar donulecegi ilk anda belli olmayan yerlerde kullanilir.

	r=0;
  ara=10;
  say=0;
  while(r != ara)
  {
    say++;
    r = rand()%20;
		printf("%d sayisini ariyorum: %d\n",ara, r);	
	}
  printf("%d sayisini %d aramada buldum.\n",ara, say);	
  
  return 0;
}
