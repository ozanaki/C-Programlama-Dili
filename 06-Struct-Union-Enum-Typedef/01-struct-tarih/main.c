/*************************************************************************
* Proje : struct / tarih
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

// struct, bilinen veri tiplerinden yeni bir veri tipi elde etmek icin kullanilir.
// struct yapisi, icindeki veri tiplerinin kapladigi toplam bit sayisi kadar yer kaplar
// bvellekte tanimlandigi sirada bulunur

// Ornegin, tarih bilgisini tek parca olarak 
// saklamak ve islemek icin bir struct yapisi kullanilabilir.
struct tarih_t {
	unsigned char gun;
	unsigned char ay;
	unsigned short yil;
};

// artik tarih_t tipinde yeni bir veri tipimiz var
// bununla istedigimiz kadar degisken tanimlayabiliriz.
struct tarih_t bugun;

int main(int argc, char *argv[])
{
	printf("Bugunun tarihini giriniz\n");
	printf("Gun: ");
	scanf("%u", &bugun.gun);
	printf("Ay: ");
	scanf("%u", &bugun.ay);
	printf("Yil: ");
	scanf("%u", &bugun.yil);
  
  printf("\nBugun: %d.%d.%d\n", 
		bugun.gun, bugun.ay, bugun.yil);
  
  return 0;
}
