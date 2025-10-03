/*************************************************************************
* Proje : Diziler / Matris Transpoze
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
float B[SUTUN][SATIR];

int main(int argc, char* argv[])
{
	printf("A matrisini Giriniz:\n");
	for(i=0; i<SATIR; i++)
	{
		for(j=0; j<SUTUN; j++)
		{
			printf("A[%d,%d] = ",i,j);
			scanf("%f", &A[i][j]);
		}
	}

	// A nin Transpozunu al ve B'ye kaydet
	for(i=0; i<SATIR; i++)
	{
		for(j=0; j<SUTUN; j++)
		{
			B[j][i] = A[i][j];
		}

	}

	// A matrisini ekrana Yaz
	printf("A Matrisi:\n");
	printf("-------------------");
	for(i=0; i<SATIR; i++)
	{
		printf("\n|  ");
		for(j=0; j<SUTUN; j++)
		{
			printf("%0.1f  ",A[i][j]);
		}
		printf("|");
	}
	printf("\n\n");

	// B matrisini ekrana yaz
	printf("A Transpozu:\n");
	printf("-------------------");
	for(i=0; i<SATIR; i++)
	{
		printf("\n|  ");
		for(j=0; j<SUTUN; j++)
		{
			printf("%0.1f  ",B[i][j]);
		}
		printf("|");
	}
	printf("\n\n");

	return 0;
}

