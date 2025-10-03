/*************************************************************************
* Proje : Pointer / Pointer Pointerlari
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : minGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// bir pointer degiskenini gosteren baska bir pointer tanimlanabilir.
// ayrica bir pointer degiskenini gosteren baska bir pointer degiskenini gosteren baska bir pointer da tanimlanabilir.
// bu boyle uzayip gidebilir ancak takibi ve kontrolu imkansiz hale geleceginden iki seviden otesi pek kullanilmaz.

int i;     // i degiskenimiz
int *p;    // i degiskenini gosteren p pointeri
int **q;   // i degiskenini gosteren p pointerini gosteren q pointeri
int ***r;  // i degiskenini gosteren p pointerini gosteren q pointerini gosteren r pointeri

int main(int argc, char* argv[])
{
	i=100;
	p=&i;
	q=&p;
	r=&q;

	printf("i   : %u\n\n", i);
	printf("p   : %u\n", p);
	printf("*p  : %u\n\n", *p);
	printf("q   : %u\n", q);
	printf("*q  : %u\n", *q);
	printf("**q : %u\n\n", **q);
	printf("r   : %u\n", r);	
	printf("*r  : %u\n", *r);
	printf("**r : %u\n", **r);
	printf("***r: %u\n\n", ***r);

	return 0;
}

