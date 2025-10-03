/*************************************************************************
* Proje : Operatorler / Bilesik atama operatorleri
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

int a,b,c,d,e;

int main(int argc, char *argv[])
{
  a = 3;
  b = 5;
  c = 7;
  d = 30;
    printf("Once : a=%d, b=%d c=%d d=%d\n",a,b,c,d);

  // Bilesik atama operatorler, soldaki degisken ile sagdaki degerin
  // islem sonucunu tekrar soldaki degiskene atar. 

  a += 7;  // a = a + 7;
  b -= 3;  // b = b - 3;
  c *= 10; // c = c * 10;
  d /= 3;  // d = d / 3;
  printf("Sonra: a=%d, b=%d c=%d d=%d\n\n",a,b,c,d);

  e = 240;
  printf("e=%d\n",e);

  e |= 0x0F;
	printf("e=%d\n",e);

  e &= 0x0C;
	printf("e=%d\n",e);

  return 0;
}
