/*************************************************************************
* Proje : Derleyici direktifleri / include
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "hesapla.h"

int main(int argc, char *argv[])
{
  int sayi1 = 3;
  int sayi2 = 5;
  
  int toplam = topla(sayi1, sayi2);
  
  printf("toplam: %d\n",toplam);


  return 0;
}
