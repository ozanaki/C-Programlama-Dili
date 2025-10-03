/*************************************************************************
* Proje : Derleyici direktifleri / define ifdef undef
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define KARE

#define PI 3.14
#define KAREAL(x) (x*x)
#define CARPIM(a,b) (a*b)

int main(int argc, char *argv[])
{
	float alan=0;
 
#ifdef DAIRE
	int yaricap = 5;
	alan = PI * KAREAL(yaricap);
#endif

#ifdef KARE
	int kenar = 6;
	alan = CARPIM(kenar,kenar);
#endif

// #undef DAIRE
// #undef KARE

#ifdef DAIRE
	printf("daire ");
#endif

#ifdef KARE
	printf("kare ");
#endif
  
  	printf("alani = %f\n", alan);
  
  	return 0;
}
