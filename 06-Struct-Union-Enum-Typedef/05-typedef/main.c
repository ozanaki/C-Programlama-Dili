/*************************************************************************
* Proje : typedef
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

enum yonler_t
{
	kuzey = 0x01,
	guney = 0x02,
	dogu = 0x04,
	bati = 0x08,
};

// typedef, mevcut bir veri tipine yeni bir isim tanimlamak icin kullanilir.
// genelde uzun veri tipi isimlerini kisaltmak ya da 
// struct, union, enum veri tiplerini daha kisa yazabilmek icin kullanilir.
typedef int tam;
typedef short int int16;
typedef int int32;
typedef long int int64;
typedef unsigned int uint;
typedef unsigned char uchar;
typedef uchar byte;
typedef enum yonler_t yonler;

tam sayi;
int32 x,y,z;
uint pozitif;
byte b;
yonler yon;

//---------------------------------------------------

int main(int argc, char *argv[])
{
  sayi=123;
  printf("sayi: %d\n", sayi);

  x=y=z=sayi;
  printf("x: %d y: %d z: %d\n", x,y,z);

  pozitif=1;
  printf("pozitif: %d\n", pozitif);

  b=255;
  printf("b: %d\n", b);

  yon=guney|dogu;
  printf("yon: 0x%02x\n", (int)yon);

  return 0;
}
