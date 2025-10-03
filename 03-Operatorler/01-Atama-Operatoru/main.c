/*************************************************************************
* Proje : Operatorler / Atama Operatoru
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

int a=3; // ilk deger atama
int b;
char c;
int i,j,k;
float f;

int main(int argc, char *argv[])
{
	// Siradan atamalar:
	a=5; // ilk atamadan sonra tekrar deger atanabilir (const degilse)
	b=7; 
	i=j=k=50; // ardisik deger atama (her atama ifadesi, ayni zamanda atadigi degeri uretir)

	// degisken tiplerine gore bellekte kapladigi bit sayisina gore buyukluklerinden soz edilir.
	// kucuk boyutlu degisken degerinin buyuk boyutlu degiskene atanmasinda bir sorun yoktur.

	// buyuk boyutlu degisken degerinin kucuk boyutlu degiskene atanmasi soyle olur:
	f=i; // ondalik sayi tam sayiya atanirsa sadece tam kisim atanir
	c=i; // kucuk degiskenin bit sayisi kadar atama yapilir, fazla bitler kesilir.
	
	printf("i=%d j=%d k=%d f=%f c=%d\n", i,j,k,f,c);
	
	i=300;
	f=i;
	c=i;
	
	printf("i=%d --> f=%f c=%d\n", i,f,c);

	f=12.34;
	c=f;
	i=f;
	
	printf("f=%f --> i=%d c=%d\n", f,i,c);
		
  return 0;
}
