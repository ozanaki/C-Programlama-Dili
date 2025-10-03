/*************************************************************************
* Proje : komut satiri / parametreler
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
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
	int i;	
	printf("%d adet arguman girilmis.\n",argc);
	for(i=0; i<argc; i++)
	{
		printf("%d: %s\n", i, argv[i]);
	}
		
  return 0;
}
