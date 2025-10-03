/*************************************************************************
* Proje : enum / ozel gunler
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

// belirli elemanlardan olusan bir kume tanimlamak icin  enumn yapisi kullanilir. 
// Her elemana sirasiyla sayisal bir deger atanir. Baslangic degeri keyfi secilebilir
// Ya da her bir elemana ayri bir sayisal deger de atanabilir.
enum aylar_t 
{ ocak=1, subat, mart, nisan,
  mayis, haziran, temmuz, agustos,
	eylul, ekim, kasim, aralik
};
	
int gun;
enum aylar_t ay;

int main(int argc, char *argv[])
{
	printf("*** Ozel gunler ***\n");
	printf("Ay (1-12): ");	  
	scanf("%d", &ay);
	printf("Gun (1-31): ");	  
	scanf("%d", &gun);
	
	switch(ay)
	{
		case ocak: {
			if(gun==1) printf("Yilbasi\n");
			break;	
		}		
		case mart: {
			if(gun==18) printf("Canakkale Zaferi ve Sehitlerini Anma Gunu\n");
			break;	
		}		
		case ekim: {
			if(gun==29) printf("Cumhuriyet Bayrami\n");
			break;	
		}
		case nisan: {
			if(gun==23) printf("Ulusal Egemenlik ve Cocuk Bayrami\n");
			break;	
		}
		case mayis: {
			if(gun==1) printf("Emek ve Dayanima Gunu\n");
			if(gun==19) printf("Genclik ve Spor Bayrami\n");
			break;	
		}
		case agustos: {
			if(gun==30) printf("Zafer Bayrami\n");
			break;	
		}
		default: {
			printf("Bu tarihte ozel gun yoktur.\n");
			break;
		}
	}
	
  return 0;
}
