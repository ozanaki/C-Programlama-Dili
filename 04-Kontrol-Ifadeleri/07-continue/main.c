/*************************************************************************
* Proje : Kontrol ifadeleri / continue
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int i, r, top;

int main(int argc, char *argv[])
{

  // continue; program akisini dongu basina gonderir

  top=0;
  for(i=0; i<20; i++)
  {
    r=rand()%20;

		if(r%2 == 0) // cift sayi mi?
    {
      printf("%d sayisi pass gecildi.\n",r);	
      continue; // cift sayi ise, isleme sokma ve donguye devam et
    }

    // kontrolu gecen sayilari topla (sadece tek sayilari toplar)
    top += r; 
		printf("%d sayisi toplandi: %d\n",r,top);	
	}

  printf("islem bitti. toplam: %d\n", top);
  
  return 0;
}
