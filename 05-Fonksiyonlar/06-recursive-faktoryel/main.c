/*************************************************************************
* Proje : Fonksiyonlar / Recursive / faktoryel
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

// Recursive fonksiyonlar, kendi kendini cagiran fonksiyonlardir.
// Her cagrida yeni lokal degiskenler olusturulur (static haric)

//-------------------------------------------
// verilen sayinin faktoryelini donduren fonksiyon
int faktoryel(int n)
{
	int sonuc;
	if(n==1) return 1; // Her recursive fonksiyonun bir sonlandirma kosulu olmalidir.
	sonuc = n * faktoryel(n-1);
	return sonuc;
}

//-------------------------------------------

int main(int argc, char *argv[])
{
 	int sayi, cevap;
	printf("Faktoryeli hesaplanacak sayi giriniz: ");
	scanf("%d", &sayi);
	
	cevap = faktoryel(sayi);
	
	printf("%d! = %d\n", sayi, cevap);
	
  return 0;
}
