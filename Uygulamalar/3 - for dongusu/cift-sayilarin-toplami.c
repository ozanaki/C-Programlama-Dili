#include <stdio.h>
#include <stdlib.h>

/* 0'dan 100'e kadar Cift sayilarin toplamini bulan program */

int say,toplam;

int main(int argc, char *argv[]) 
{
	for(say=2; say<=100; say=say+2)
	{
		toplam=toplam+say;
	}
		
	printf("0 dan 100e cift sayilarin toplami: %d\n",toplam);
	return 0;
}
