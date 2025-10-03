#include <stdio.h>
#include <stdlib.h>

int notlar[30];
int i;
int toplam;
float ortalama;

int main(int argc, char *argv[]) 
{
	srand(time(NULL));
	
	for(i=0; i<30; i++)
	{
		notlar[i] = rand() % 101;
	}
	
	for(i=0; i<30; i++)
	{
		toplam=toplam+notlar[i];
		printf("%d. kisinin notu = %d \n", i, notlar[i]);
	}
	
	ortalama = toplam / 30.0;
	
	printf("Sinifin ortalamasi %f dir.\n", ortalama);
	
	return 0;
}
