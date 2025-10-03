/*************************************************************************
* Proje : enum / yonler
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

// enum uyelerine, bitleri cakismayan sayisal degerler vererek
// ayni anda birden cok uyenin secilebilmesini saglayabiliriz
enum yonler_t
{
	kuzey = 0x01,
	guney = 0x02,
	dogu = 0x04,
	bati = 0x08,
};

enum yonler_t yon;

int main(int argc, char *argv[])
{
  //yon = guney;
  //yon = dogu;
	yon = kuzey | bati; // OR islemi ile hem kuzey hem bati yonunu secebiliriz
	
	printf("Yon: ");
	if(yon & kuzey) printf("kuzey");
	if(yon & guney) printf("guney");
	if(yon & dogu) printf("dogu");
	if(yon & bati) printf("bati");  
	printf("\n");
	
  return 0;
}
