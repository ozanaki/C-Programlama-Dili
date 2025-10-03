/*************************************************************************
* Proje : Operatorler / Islem onceligi
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

int a,b,c;

int main(int argc, char *argv[])
{

	// C dilinde islem onceligi: (), ++, --, *, /, +, -, 
	// islem onceligini degistirmek icin () paramtezler kullanilir

	a=10;	b=5;
	c=a+3*b/2-1; // c==16
	printf("%d+3*%d/2-1 = %d\n",a,b,c);
	
	c=++a+3*--b/-a+2; // c==12
	printf("++%d+3*--%d/-%d+2 = %d\n",a,b,a,c);

	a=10;	b=5;
	c=a+-++b; // c==4
	printf("%d+-++%d = %d\n",a,b,c);

	a=10;	b=5;
	c=a++-++b+--a-++b-++a+b--; // c==3
	printf("%d++-++%d+--%d-++%d-++%d+%d-- = %d\n",a,b,a,b,a,b,c);
	// Onceligi ayni operatorler SOLDAN SAGA islem gorur
		
  return 0;
}
