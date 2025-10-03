/*************************************************************************
* Proje : Pointer / Girilen diziyi tersten yaz
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int uzunluk(char const *const str)
{
	const char *p=str;
	int len=0;
	while(*p++) len++;
	return len;
}

char str[255];
char *p;

int main(int argc, char* argv[])
{
	printf("Bir cumle yaziniz: ");
	fgets(str,sizeof(str),stdin);
	//scanf("%s", str);
	printf("\n");
	
	p=str;
	while(*p++) // burada * operatoru ++'ya gore onceliklidir. 
	// once *p ile pointer icerisiginer bakilir, sifir degilse dongu devam eder.
	// sonra, p++ ile p'nin kendisi arttirilir (p'nin gosterdigi deger arttirilmaz)
	{

	}
	p-=3; // son karaktere geri donmek icin \n\r ve \0 karakterlerinden uc adim geri geliyoruz.
	//p=str+strlen(str);

	printf("uzunluk: %d\n", uzunluk(str));
	printf("tersten yazilis: ");
	while(p>=str)
	{
		printf("%c",*p--);
	}
	printf("\n");

	return 0;
}

