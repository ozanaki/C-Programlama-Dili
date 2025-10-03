
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int yaricap;
float alan,cevre;

int main(int argc, char *argv[])
{
	printf("Dairenin yaricapini giriniz:");
	scanf("%d",&yaricap);

	alan = PI * yaricap * yaricap;
	cevre = 2 * PI * yaricap;

	printf("Dairenin alani %.1f ve cevresi %.1f dir.\n",
			alan,cevre);

	system("pause");
	return 0;
}