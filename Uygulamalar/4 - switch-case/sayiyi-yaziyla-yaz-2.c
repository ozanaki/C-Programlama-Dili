
#include <stdio.h>
#include <stdlib.h>

int sayi;
int birler;
int onlar;
int yuzler;

int main(int argc, char *argv[])
{
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);

	if(sayi==0) printf("sifir");

	yuzler=sayi/100;
	sayi=sayi%100;
	onlar=sayi/10;
	birler=sayi%10;

	switch(yuzler)
	{
		case 2: { printf("iki"); break; }
		case 3: { printf("uc"); break; }
		case 4: { printf("dort"); break; }
		case 5: { printf("bes"); break; }
		case 6: { printf("alti"); break; }
		case 7: { printf("yedi"); break; }
		case 8: { printf("sekiz"); break; }
		case 9: { printf("dokuz"); break; }
	}

	if(yuzler>0) printf("yuz");

	if(onlar==1) printf("on");
	if(onlar==2) printf("yirmi");
	if(onlar==3) printf("otuz");
	if(onlar==4) printf("kirk");
	if(onlar==5) printf("elli");
	if(onlar==6) printf("altmis");
	if(onlar==7) printf("yetmis");
	if(onlar==8) printf("seksen");
	if(onlar==9) printf("doksan");

	switch(birler)
	{
		case 1: { printf("bir"); break; }
		case 2: { printf("iki"); break; }
		case 3: { printf("uc"); break; }
		case 4: { printf("dort"); break; }
		case 5: { printf("bes"); break; }
		case 6: { printf("alti"); break; }
		case 7: { printf("yedi"); break; }
		case 8: { printf("sekiz"); break; }
		case 9: { printf("dokuz"); break; }
	}
	
	printf("\n");
	system("pause");
	return 0;
}