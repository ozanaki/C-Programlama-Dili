
#include <stdio.h>
#include <stdlib.h>

int taban,yukseklik;
float alan;

int main(int argc, char *argv[])
{
	printf("Ucgenin taban uzunlugunu giriniz:");
	scanf("%d",&taban);

	printf("Ucgenin yuksekligini giriniz:");
	scanf("%d",&yukseklik);

	alan = (taban * yukseklik) / 2;

	printf("Ucgenin alani:%.2f\n",alan);

	system("pause");
	return 0;
}