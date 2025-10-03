/*************************************************************************
* Proje : Fonksiyonlar / Recursive / fibonacci
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

// Fibonacci sayilarinini hesaplamak icin recursive fonksiyon
int fibonacci(int n)
{
	return n<=1?n:fibonacci(n-1)+fibonacci(n-2);
}

//----------------------------------------------------

int main(int argc, char *argv[])
{
 	int sayi,i,f;
	printf("Kac adet Fibonacci elemani listelensin: ");
	scanf("%d", &sayi);
	
	for(i=0; i<sayi; i++)
	{
		f=fibonacci(i);
		printf("%d ", f);
	}

  return 0;
}
