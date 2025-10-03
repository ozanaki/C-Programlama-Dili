/*************************************************************************
* Proje : Veri Tipleri ve Degiskenler / Global Degisken, Lokal Degisken
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int a=3; // global degisken
int b;

int main(int argc, char *argv[])
{
  int a=5; // lokal degisken
  int c;
  
  // ekranda ne yazar ?
  printf("a=%d\n", a);  // lokal degiskenler her zaman onceliklidir.
  printf("b=%d\n", b);  // global degiskenlerin ilk degeri sifirdir
  printf("c=%d\n", c);  // lokal degiskenlerin ilk degeri ongorulemez
	
  return 0;
}
