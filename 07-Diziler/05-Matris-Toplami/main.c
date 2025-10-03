/*************************************************************************
* Proje : Diziler / Matris Toplami
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SATIR 3
#define SUTUN 3

int i,j;
float A[SATIR][SUTUN];
float B[SATIR][SUTUN];
float C[SATIR][SUTUN];

int main(int argc, char* argv[])
{
	// A matrisini ekrandan al
	printf("A matrisini Giriniz:\n");
	for(i=0; i<SATIR; i++)
	{
		for(j=0; j<SUTUN; j++)
		{
			printf("A[%d,%d] = ",i,j);
			scanf("%f", &A[i][j]);
		}
	}

	// B matrisini ekrandan al
	printf("\nB matrisini Giriniz:\n");
	for(i=0; i<SATIR; i++)
	{
		for(j=0; j<SUTUN; j++)
		{
			printf("B[%d,%d] = ",i,j);
			scanf("%f", &B[i][j]);
		}
		
	}

	// Matrisleri Topla ve sonucu C matrisine kaydet
	for(i=0; i<SATIR; i++)
	{
		for(j=0; j<SUTUN; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}

	}

	// C sonuc matrisini ekrana yaz
	printf("C Toplam Matrisi:\n");
	printf("-------------------");
	for(i=0; i<SATIR; i++)
	{
		printf("\n| ");
		for(j=0; j<SUTUN; j++)
		{
			printf("%4.1f ",C[i][j]);
		}
		printf("|");
	}
	printf("\n");

	return 0;
}

