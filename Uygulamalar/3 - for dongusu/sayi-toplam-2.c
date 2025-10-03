#include <stdio.h>
#include <stdlib.h>

/* 0 ile 100 arasinda 4 ile tam bolunebilen 
sayilarin toplamini bulan programi yaziniz */

int sayi;
int toplam;

int main(int argc, char *argv[]) 
{
	
	for(sayi=0; sayi<=100; sayi++)
	{
		if(sayi%4 == 0)
		{
			toplam = toplam + sayi;			
		}
		
	}
	printf("4e bolunebilen sayilarin toplami: %d\n", toplam);
	
	return 0;
}
