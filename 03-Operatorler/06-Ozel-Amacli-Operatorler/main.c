/*************************************************************************
* Proje : Operatorler / ozel Amacli Operatorler
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : Orwell Dev C++ IDE & TDM-GCC 4.8.1 Compiler
**************************************************************************/

#include <stdio.h>

int a,b,min,max;
float f;
char c;

int main(int argc, char *argv[])
{

	a = 3;
	b = 5;
	printf("a=%d, b=%d\n",a,b);

	// ? operatoru kosullu deger atama icin kullanilir.
	// degisken = kosul ? dogruysa : yanlissa

	min = (a<b)?a:b; // a ve b sayilarindan kucuk olan min degiskenine atanir
	max = (a>b)?a:b; // a ve b sayilarindan buyuk olan max degiskenine atanir
	printf("min=%d, max=%d\n\n", min, max);

   // sizeof() operatoru, bir degisken tipnin ya da degiskenin
   // bellekte kapladigi alani byte cinsinden dondurur

	printf("sizeof(char) = %d\n", sizeof(char));
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(float) = %d\n", sizeof(float));
	printf("sizeof(double) = %d\n", sizeof(double));
	printf("sizeof('A') = %d\n", sizeof('A'));
	printf("sizeof(0) = %d\n", sizeof(0));
	printf("sizeof(123) = %d\n", sizeof(123));
	printf("sizeof(3.14) = %d\n\n", sizeof(3.14));
	
	// bir ifadenin onune parantez icinde veri tip yazildiginda,
	// sagindaki degeri o tipte olmaya zorlar (casting)

	f = 10 / 3;
	printf("f = %f\n",f);
	
	f = (float)10 / 3;   // 10 sayisini float tipi olarak al
	printf("f = %f\n",f);

	f = (float)(10 / 3);  // islemin sadece sonucunu float olarak al
	printf("f = %f\n",f);
	
	f = 852.876253445; //10.0 / 3;
	printf("f = %f\n",f);

	a = (int)f;  // f float degiskenine int gibi islem yap
	printf("a = %d\n",a);
	
	c = (char)a;  // a degiskenini char tipi olarak isleme sok
	printf("c = %d\n",c);
	
  return 0;
}
