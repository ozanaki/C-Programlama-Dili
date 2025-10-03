/*************************************************************************
* Proje : Fonksiyonlar / Recursive / OBEB - Brute Force
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

// OBEB hesaplayan recursive fonksiyon
// (Brute-Force, yani kaba kuvvet algoritmasi ile)
int obeb(int a, int b, int n)
{
	if((a%n)==0 && (b%n)==0)
		return n;
	else
		return obeb(a,b,n-1);
}

//---------------------------------------------

int main(int argc, char *argv[])
{
 	int a,b,cevap;
	printf("A: ");	scanf("%d", &a);
	printf("B: ");	scanf("%d", &b);
	
	cevap = obeb(a,b,a<b?a:b);
	
	printf("OBEB(%d,%d) = %d\n", a,b,cevap);
		
  return 0;
}
