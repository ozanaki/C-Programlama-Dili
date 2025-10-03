/*************************************************************************
* Proje : Komut satiri - parametreler ve donus degeri
* Dosya : main.c
* Yazar : M. Ozan AKI
* Tarih : 01.10.2012
* Derleyici : Orwell Dev C++ 5.7.1 & TDM GCC 4.8.1 
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// argc: komuta gecilen ve bosluklarla ayrilmis parametre sayisini gosterir
// argv[0]: dosyanin kendi adi
// argv[1]: birinci parametre
// argv[2]: ikinci parametre
// argv[3]: ...

int main(int argc, char *argv[])
{
  int top,i;

  if(argc < 3)
  {
		printf("Yetersiz parametre. En az iki sayi giriniz.\n");

		return -1; // Hata kodu olarak -1 dondur
	}
	else
	{
		top=0;
		for(i=1; i<argc; i++)
		{
			top+=atoi(argv[i]);
		}
	}

  return top; // Sonuc degeri dondur
}
