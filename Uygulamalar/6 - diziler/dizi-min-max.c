#include <stdio.h>
#include <stdlib.h>

int notlar[50];
int i;
int max,min;
int max_kisi, min_kisi;

int main(int argc, char *argv[]) 
{
	srand(time(NULL));
	for(i=0; i<50; i++)
	{
		notlar[i]=rand()%101;
		printf("%d. kisinin notu : %d\n",i,notlar[i]);
	}	
	
	max=notlar[0];
	for(i=1; i<50; i++)
	{
		if(notlar[i] > max)
		{
			max = notlar[i];
			max_kisi = i;
		}
	}	
	printf("En buyuk %d notu %d. kisinindir.\n",max,max_kisi);

	min=notlar[0];
	for(i=1; i<50; i++)
	{
		if(notlar[i] < min)
		{
			min = notlar[i];
			min_kisi=i;
		}
	}	
	printf("En kucuk %d notu %d. kisinindir\n",min,min_kisi);
	
	
	return 0;
}
