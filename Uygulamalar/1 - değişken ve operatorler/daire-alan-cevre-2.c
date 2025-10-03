#include <stdio.h>
#include <stdlib.h>

float r,alan,cevre;

int main(int argc, char *argv[]) 
{
	printf("Dairenin yaricapini giriniz:");
	scanf("%f",&r);
	
	alan = 3.14*r*r;
	cevre = 2*3.14*r;
	
	printf("Dairenin alani: %.2f\n",alan);
	printf("Dairenin cevresi: %.2f\n",cevre);
	
	return 0;
}
