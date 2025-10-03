/*************************************************************************
* Proje : Pointer / Fonksiyona parametre olarak gecilmesi
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// normalde bir fonksiyone gecilen parametrelerin lokal kopyasi olusturulur.
// fonksiyon bu parametrelerde islem yapsa dahi, cagirildigi degiskenleri etkilemez.
// ancak bir fonksiyona parametre olarak bir pointer gecilirse, 
// fonksiyon artik dogrudan bu degiskenlere erisebilir ve uzerinde degisiklik yapabilir.

// bu fonksiyon a ve b degiskenlerinin degerlerini karislikli olarak degistirir (takas eder)
void takas(int *const a, int *const b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int x, y;

int main(int argc, char* argv[])
{
	x = 25;
	y = 63;

	printf("x: %d, y: %d\n", x, y);

	takas(&x, &y);

	printf("x: %d, y: %d\n", x, y);

	return 0;
}

