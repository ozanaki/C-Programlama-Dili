#include <stdio.h>
#include <stdlib.h>

float taban,yukseklik,alan;

int main(int argc, char *argv[]) 
{
	printf("Ucgenin tabanini giriniz:");
	scanf("%f",&taban);

	printf("Ucgenin yuksekligi giriniz:");
	scanf("%f",&yukseklik);
	
	alan = (taban * yukseklik) / 2;
	
	printf("Ucgenin alani %f dir.\n",alan);
	
	return 0;
}
