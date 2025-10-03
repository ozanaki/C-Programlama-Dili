/*************************************************************************
* Proje : Kontrol ifadeleri / break
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int i,r;

int main(int argc, char *argv[])
{

	// break; herhangi donguyu (for, while, do-while) aninda keserek sonlandirir ve
	// program dongu blok kodundan sonra calismaya devam eder.
	
	for(i=0; i<10000; i++)
	{
		r=rand()%20;
		printf("i:%d r:%d\n", i, r);
		if(r == 10) 
		{
			printf("Aranan sonuc bulundu ve dongu kesildi.\n");
			break;
		}
	} 

	printf("Islem bitti.\n");

	return 0;

}
