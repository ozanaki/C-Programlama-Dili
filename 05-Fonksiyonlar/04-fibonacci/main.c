/*************************************************************************
* Proje : Fonksiyonlar / fibonacci
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

#define MAX 10

// Fibonacci sayi dizisinde her bir sayi, kendinden once gelen iki sayinin toplamidir.

int main(int argc, char *argv[])
{
	unsigned long i, daha_onceki = 0, onceki = 1, sayi;
	printf ("*** Fibonacci Sayilari ***\n");
	printf("%u\n",daha_onceki);
	printf("%u\n",onceki);
	for (i = 2; i < MAX; i++) {
	  sayi = daha_onceki + onceki;
	  printf("%u\n", sayi);
	  daha_onceki = onceki;
	  onceki = sayi;
	}

  return 0;
}

