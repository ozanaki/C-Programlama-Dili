/*************************************************************************
* Proje : Operatorler / Bit maskeleme
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

unsigned char a;

int main(int argc, char *argv[])
{
	a=85;
	printf("a = %d\n",a);
	
	// Bitsel islem yapan operatorler, bir tamsayinin butununden bagimsiz olarak
	// sadece herhangi bitini degistirmek ya da okumak icin kullanilabilir.

	a = a | 0x08; // a nin 3. bitini 1 yap
	printf("a = %d\n",a);

	a = a & ~0x40; 	// a nin 6. bitini 0 yap
	printf("a = %d\n",a);

	printf("\n");

	printf("a nin 4. biti 0 mi? = %d\n", (a & 0x10) == 0);
	
	printf("a nin 4. biti 1 mi? = %d\n", (a & 0x10) == 0x10);

	printf("\n");

	printf("a nin 0. biti = %d\n", (a & 0x01) == 0x01);
	printf("a nin 1. biti = %d\n", (a & 0x02) == 0x02);
	printf("a nin 2. biti = %d\n", (a & 0x04) == 0x04);
	printf("a nin 3. biti = %d\n", (a & 0x08) == 0x08);
	printf("a nin 4. biti = %d\n", (a & 0x10) == 0x10);
	printf("a nin 5. biti = %d\n", (a & 0x20) == 0x20);
	printf("a nin 6. biti = %d\n", (a & 0x40) == 0x40);
	printf("a nin 7. biti = %d\n", (a & 0x80) == 0x80);
		
  return 0;
}
