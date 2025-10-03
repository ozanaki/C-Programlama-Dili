/*************************************************************************
* Proje : Veri Tipleri ve Degiskenler / Const, Volatile 
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int a;
const int b = 3; // const degiskenlere ilk atamada deger verilir.
volatile int c; // volatile degisken, heap bellek yerine islemci kaydedicilerinde saklanir.

int main(int argc, char *argv[])
{
  printf("Once a=%d, b=%d c=%d\n", a, b, c);
  
  a = 3; 
	b = 5; // derleyici burada hata verecek, cunku const degiskene sonradan deger atanamaz.
	c = 7; // volatile degiskenlere erisim, heap bellek alanindakilere gore cok daha hizlidir.
  
  printf("Sonra a=%d, b=%d c=%d\n", a, b, c);
    
  return 0;
}
