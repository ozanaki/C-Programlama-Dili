/*************************************************************************
* Proje : Diziler / Dizilerde ilk deger atanma
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define LEN 5

int i;
int dizi_1[LEN]; // Global degisken ise, tum elemanlarin degeri sifir olur
int dizi_2[LEN] = {1,2,3,4,5}; // ilk 5 elemana degerleri atanir
int dizi_3[LEN] = {1,2,3}; // ilk 3 elemana deger atanir
int dizi_4[LEN] = {1}; // ilk elemana 1 degeri atanir

int main(int argc, char* argv[])
{
	int dizi_lokal[LEN]; // Lokal degisken ise ve ilk deger atanmadiyse degerler ongorulemez

	printf("\ndizi_1: ");
	for(i=0; i<LEN; i++) printf("%d, ",dizi_1[i]);

	printf("\ndizi_2: ");
	for(i=0; i<LEN; i++) printf("%d, ",dizi_2[i]);

	printf("\ndizi_3: ");
	for(i=0; i<LEN; i++) printf("%d, ",dizi_3[i]);

	printf("\ndizi_4: ");
	for(i=0; i<LEN; i++) printf("%d, ",dizi_4[i]);

	printf("\ndizi_lokal: ");
	for(i=0; i<LEN; i++) printf("%d, ",dizi_lokal[i]);

	printf("\n");
	
	return 0;
}
