/*************************************************************************
* Proje : Veri Tipleri ve Degiskenler / ilk deger atama, sabitler
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <inttypes.h>

char c = 'A'; // tek tirnak icindeki karakerlerin ASCII kodu kullanilir
const int kdv = 18u; // unsigned icin sayinin sonuna u konur
const double pi = 3.14; // ondalikli sayilar double olarak ele alinir
float f = 1.28f; // ondalikli sayinin float oldugunu belirtmek icin sayinin sonuna f konur

int i = 34;
short int i16 = 012; // octal (sekizlik) tabandaki sayilarin basina 0 konur
unsigned short int u16 = 1024u;
long int i32 = 0x2A; // hexadecimal (onaltilik) tabandaki sayilarin basina 0x konur
unsigned long int u32 = 0xffff;

int main(int argc, char *argv[])
{
	// sizeof() ifadesi, verilen degiskenin bellekte kapladigi alani byte cinsinden dondurur
	printf("c: %c c: %d sizeof(c): %d byte\n", c, c, sizeof(c));
	
	// varsayilan uzunluk ?
	printf("i: %d sizeof(i): %d byte\n", i, sizeof(i)); 
	
	printf("i16: %d sizeof(i16): %d byte\n", i16, sizeof(i16));
	printf("u16: %u sizeof(u16): %d byte\n", u16, sizeof(u16));
	printf("i32: %d sizeof(i32): %d byte\n", i32, sizeof(i32));
	printf("u32: %u sizeof(u32): %d byte\n", u32, sizeof(u32));

	printf("\nFrom inttypes.h header:\n");
	printf("INT8_MIN: %d INT8_MAX: %d\n", INT8_MIN, INT8_MAX);
	printf("INT16_MIN: %d INT16_MAX: %d\n", INT16_MIN, INT16_MAX);
	printf("INT32_MIN: %d INT32_MAX: %d\n", INT32_MIN, INT32_MAX);
	printf("INT64_MIN: %l INT64_MAX: %l\n", INT64_MIN, INT64_MAX);
  
  	printf("\n");

  c=0;
  char cc=c;
	while(cc>--c) 
	{
		printf("min(char): %d\r", c);  
		cc=c;
	}
	printf("\n");
	
  c=0;
  cc=c;
	while(cc<++c) 
	{
		printf("max(char): %d\r", c);  
		cc=c;
	}
	printf("\n");
	
	i16=0;
  short int ci16=i16;
	while(ci16>--i16) 
	{
		printf("min(short int): %d\r", i16);  
		ci16=i16;
	}
	printf("\n");
	
	i16=0;
	ci16=i16;
	while(ci16<++i16) 
	{
		printf("max(short int): %d\r", i16);  
		ci16=i16;
	}
	printf("\n");
  	
  return 0;
}
