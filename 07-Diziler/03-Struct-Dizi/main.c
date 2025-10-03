/*************************************************************************
* Proje : Diziler / struct dizi
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define LEN 4

int i;

typedef struct  {
	unsigned char gun;
	unsigned char ay;
	unsigned int yil;
} tarih_t;

tarih_t tarihler[LEN]; // struct tipi icin dizi tanimliyoruz

int main(int argc, char *argv[])
{

	for(i=0; i<LEN; i++)
	{
		printf("%d. Tarihi girin:\n",i+1);
		printf("Gun: "); scanf("%d", &tarihler[i].gun);
		printf("Ay: "); scanf("%d", &tarihler[i].ay);
		printf("Yil: "); scanf("%d", &tarihler[i].yil);
	}

	printf("\n\n");
	printf("Girilen Tarihler\n");
	printf("-----------------\n");
	for(i=0; i<LEN; i++)
	{
		printf("%d.%d.%d\n", tarihler[i].gun, tarihler[i].ay, tarihler[i].yil);
	}
  
  return 0;
}

