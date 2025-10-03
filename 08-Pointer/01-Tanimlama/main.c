/*************************************************************************
* Proje : Pointer / Tanimlanmasi
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Tum pointer islemlerinde sadece iki operator vardir:
// * : pointer degisken tanimlama sirasinda, degiskenin onune yazilir.
// * : bir pointer degiskeninin gosterdigi adresteki degere ulasmak icin degiskenin basina yazilir.
// & : onune geldigi degiskenin (ya da fonksiyonun) bellek adresini dondurur.

int a,b,x;
int *iptr; // pointer tanimlamak icin veri tipinden sonra degisken adinin onune * konur.
int* iptr2; // bu sekilde de tanimlanabiliyor. Ancak ustteki gibi olmasi tercih edilir.

const int *ciptr1; // bu tanimda, pointer degeri degistirilebilir ancak gosterdigi deger degistirilemez.
int const *ciptr2; // bu tanim usttekinin aynisidir.
int *const ciptr3; // bu tanimda, pointer degeri degistirilemez ancak gosterdigi deger degistirilebilir.
const int *const ciptr4; // bu tanimda, ne pointer degeri ne de gosterdigi deger degistirilemez.

int main(int argc, char* argv[])
{
	a=3; b=5; x=7;

	ciptr1 = &x;
//	*ciptr1 = 12; // bu satirda hata verir, cunku degisken icerigi degistirilemez
	ciptr1++;     // ancak bu satirda hata vermez, cunku pointer kendi degeri degistirilebilir.

//	ciptr3 = &x; // bu satirda hata verir cunku pointer degeri degistirilemez
	*ciptr3 = 12; // bu satirda hata vermez, cunku degisken icerigi degistirilebilir.
//	ciptr3++;     // bu satirda hata verir cunku pointer degeri degistirilemez

//	ciptr4 = &x; // bu satirda hata verir cunku pointer degeri degistirilemez
//	*ciptr4 = 12; // bu satirda hata verir, cunku degisken icerigi degistirilemez
//	ciptr4++;     // bu satirda hata verir cunku pointer degeri degistirilemez

	iptr = &a;  // a degiskeninin adresini iptr degiskenine ata
	*iptr = *iptr*10; // iptr degiskeninin gosterdigi adresteki deger ile 10 sayisini carp
	// not: burada pointer operatorunun onceligi vardir.
	// Bu nedenle once adres cozumlenir, sonra carpma islemi yapilir.
	
	iptr = &b;  // b degiskeninin adresini iptr degiskenine ata
	*iptr = *iptr*10; // iptr degiskeninin gosterdigi adresteki deger ile 10 sayisini carp

	printf("a: %d  b: %d\n",a,b);

	printf("&a: 0x%0x  &b: 0x%0x\n",&a,&b);

	printf("iptr: 0x%0x\n",iptr);
	printf("iptr2: 0x%0x\n",iptr2); // deger atanmamis pointer gecersiz bir bellek adresini gosterir

	return 0;
}

