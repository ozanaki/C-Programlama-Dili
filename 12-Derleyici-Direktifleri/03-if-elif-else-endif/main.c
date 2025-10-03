/*************************************************************************
* Proje : Derleyici direktifleri / if elif else endif
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
	Tercihe bagli olarak derleyici komut satirinda -DDIL_FR define
	tanimlamasi yaparak kaynak dosyasi disinda da tanimlama yapilabilir.
*/
#define DIL_EN

#define TR 1
#define EN 2
#define FR 3

#if defined DIL_TR
#define DIL TR
#elif defined DIL_EN
#define DIL EN
#elif defined DIL_FR
#define DIL FR
#endif

//#ifndef DIL
// Eger DIL derleyici direktifi tanimlanmamis ise varsayilan olarak TR yap
//#define DIL TR
//#endif

#ifndef DIL
#error "DIL Makrosunu Tanimlamadiniz!"
#endif

#line 1000 "Ana Program"
int main(int argc, char *argv[])
{
#if DIL==TR
	printf("Merhaba\n");
#elif DIL==EN
	printf("Hello\n");
#elif DIL==FR
	printf("Bonjour\n");
#else
	printf("DIL Tanimlamadiniz!\n");
#endif
  
	return 0;
}
