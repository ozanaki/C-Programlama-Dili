/*************************************************************************
* Proje : Fonksiyonlar
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

// Fonksiyon, bir kod blogunu sistematik bir sekilde defalarca 
// kullanilabilmesini (cagirilabilmesini) saglayan yapidir.

//-----------------------------------------------
// bu fonsiyon parametre almiyor ve int donduruyor.
int sayi_al()
{
		int sayi;
		printf("Sayi giriniz: ");
		scanf("%d", &sayi);
		return sayi;
}

//-----------------------------------------------
// bu fonsiyon prototipi bir tane int parametre aliyor ve deger dondurmuyor.
void sonuc_yaz(int sonuc);

//-----------------------------------------------
// bu fonsiyon prototipi iki tane int parametre aliyor ve int donduruyor.
int topla(int a, int b);

//-----------------------------------------------
// main()'de bir fonksiyondur!
int main(int argc, char *argv[])
{
  int a,b,c;
  a = sayi_al(); // ayni fonksiyon
  b = sayi_al(); // defalarca cagirilabilir
  c = topla(a,b);
  sonuc_yaz(c);
  
  return 0;
}

//-----------------------------------------------
// yukarida prototipi verilen fonksiyonun kendisi
int topla(int a, int b)
{
	return a+b;	
}

//-----------------------------------------------
// yukarida prototipi verilen fonksiyonun kendisi
void sonuc_yaz(int sonuc)
{
	printf("Sonuc = %d\n", sonuc);	
}
