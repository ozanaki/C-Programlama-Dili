/*************************************************************************
* Proje : Fonksiyonlar / yaziyla sayi
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

int sayi;
int binler,yuzler,onlar,birler;
void yaz_birler(int sayi);
void yaz_onlar(int sayi);

int main(int argc, char *argv[])
{
	printf("Sayi giriniz (0-9999): ");
	scanf("%d", &sayi);
	
	if(sayi==0) printf("sifir");
		
	binler=sayi/1000;
	sayi=sayi%1000;
	yuzler=sayi/100;
	sayi=sayi%100;
	onlar=sayi/10;
	birler=sayi%10;
	
	if(binler>0)
	{
		if(binler>1) yaz_birler(binler);
		printf("bin");
	}

	if(yuzler>0)
	{
		if(yuzler>1) yaz_birler(yuzler);
		printf("yuz");
	}
	
	yaz_onlar(onlar);
	
	yaz_birler(birler);
	
	printf("\n");

  return 0;
}

void yaz_birler(int sayi)
{
	switch(sayi)
	{
		case 1: printf("bir"); break;
		case 2: printf("iki"); break;
		case 3: printf("uc"); break;
		case 4: printf("dort"); break;
		case 5: printf("bes"); break;
		case 6: printf("alti"); break;
		case 7: printf("yedi"); break;
		case 8: printf("sekiz"); break;
		case 9: printf("dokuz"); break;
	}	
}

void yaz_onlar(int sayi)
{
	switch(sayi)
	{
		case 1: printf("on"); break;
		case 2: printf("yirmi"); break;
		case 3: printf("otuz"); break;
		case 4: printf("kirk"); break;
		case 5: printf("elli"); break;
		case 6: printf("altmis"); break;
		case 7: printf("yetmis"); break;
		case 8: printf("seksen"); break;
		case 9: printf("doksan"); break;
	}	
}
