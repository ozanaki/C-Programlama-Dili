/*************************************************************************
* Proje : Diziler / Matris Carpimi
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define A_SATIR 3
#define A_SUTUN 3

#define B_SATIR 3
#define B_SUTUN 3

#if A_SUTUN == B_SATIR
#define C_SATIR A_SATIR
#define C_SUTUN B_SUTUN
#else
#error "Carpim icin A Matrisi sutun sayisi ile B Matrisi satir sayisi esit olmali!"
#endif

int i,j,k;
float A[A_SATIR][A_SUTUN];
float B[B_SATIR][B_SUTUN];
float C[C_SATIR][C_SUTUN];

int main(int argc, char* argv[])
{
	// A matrisini ekrandan al
	printf("A matrisini Giriniz:\n");
	for(i=0; i<A_SATIR; i++)
	{
		for(j=0; j<A_SUTUN; j++)
		{
			printf("A[%d,%d] = ",i,j);
			scanf("%f", &A[i][j]);
		}
	}

	// B matrisini ekrandan al
	printf("\nB matrisini Giriniz:\n");
	for(i=0; i<B_SATIR; i++)
	{
		for(j=0; j<B_SUTUN; j++)
		{
			printf("B[%d,%d] = ",i,j);
			scanf("%f", &B[i][j]);
		}

	}

	// C carpim matrisini sifirla
	for(i=0; i<C_SATIR; i++)
	{
		for(j=0; j<C_SUTUN; j++)
		{
			C[i][j] = 0;
		}
	}

	// Matrisleri Carp ve sonuclari C'ye kaydet
	for(i=0; i<A_SATIR; i++)
	{
		for(j=0; j<B_SUTUN; j++)
		{
			for(k=0; k<A_SUTUN; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	// C carpim matrisini ekrana yaz
	printf("C Carpim Matrisi:\n");
	printf("---------------------");
	for(i=0; i<C_SATIR; i++)
	{
		printf("\n| ");
		for(j=0; j<C_SUTUN; j++)
		{
			printf("%5.1f ",C[i][j]);
		}
		printf("|");
	}
	printf("\n");

	return 0;
}

