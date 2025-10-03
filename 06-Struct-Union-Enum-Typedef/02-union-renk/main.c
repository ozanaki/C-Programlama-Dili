/*************************************************************************
* Proje : union / renkler
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

// union, icerisinde bulundugu veri tiplerinin sadece en buyugu kadar yer kaplar.
// diger tum degiskenler, LSB bitlerine yasli olarak ayni bellek alanini paylasir.

// ornegin bir renk bilgisine hem bilesen bazinda hem tum deger olarak erismek 
// istersek, union ile struct yapilarini bir arada kullanabiliriz.
union color_t {
	unsigned int code;
	struct {
		unsigned char blue;
		unsigned char green;
		unsigned char red;
	} component;
};

// artik color_t tipinde bir veri tipimiz var.
union color_t renk;

int main(int argc, char *argv[])
{
  printf("Hexadecimal formatta renk kodunu girin: ");
  scanf("%x", &renk.code);
  printf("Kirmizi: %x\n",renk.component.red);
  printf("Yesil  : %x\n",renk.component.green);
  printf("Mavi   : %x\n",renk.component.blue);
  
  return 0;
}
