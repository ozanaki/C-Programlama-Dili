#include <stdio.h>
#include <stdlib.h>


int dizi[1000]; // 1000 elemanli dizi olustur
int i;

int main(int argc, char *argv[]) 
{
	for(i=0; i<1000; i++)
	{
		dizi[i] = i*10+i;
	}

	for(i=0; i<1000; i++)
	{
		printf("dizi[%d]=%d\n",i,dizi[i]);
	}
	
	return 0;
}
