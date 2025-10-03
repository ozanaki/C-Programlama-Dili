/*************************************************************************
* Proje : Veri Tipleri ve Degiskenler / auto, extern, static, register
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// extern ifadesi ile degisken ve fonksiyonlarin sonradan ya da 
// baska bir dosyada tanimlanacagini derleyiciye bildiriyoruz
extern int a;
extern void func1(void);
extern void func2(void);
extern void func3(void);

int main(int argc, char *argv[])
{
	register int b; // b degiskeni cpu registerinda saklanir
	b=a;
  
  printf("ilk a=%d  b=%d\n\n", a,b);

  func1(); 
  func1(); 
  func1(); 
  printf("\n");
  
  func2(); 
  func2(); 
  func2(); 
  printf("\n");
  
  func3(); 
  func3(); 
  func3(); 
  printf("\n");

  printf("son a=%d  b=%d\n", a,b);

  return 0;
}

int a = 300; // a degiskeninin gercek tanimi buradadir.

// func1, lokal degisken kullaniyor
// fonksiyon icerisindeki lokal degiskenlerde
// her cagrida ilk deger yeniden atanir
void func1(void)
{
	auto int a=100; // auto yazmasakta olur
	a=a+1;
	printf("func1 a=%d\n",a);	
}

// func2, lokal static degisken kullaniyor
// lokal static degiskenler, ilk atama yapildiktan sonra
// fonksiyon cagrilari arasinda degerini korur
void func2(void)
{
	static int a=200;
	a=a+1;
	printf("func2 a=%d\n",a);	
}

// func3, lokal degiskeni olmadigi icin ayni isimdeki
// global degiskene erisir.
void func3(void)
{
	a=a+1;
	printf("func3 a=%d\n",a);	
}
