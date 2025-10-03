#include <stdio.h>
#include <stdlib.h>

int dizi[20];
int ara;
int say;
int i;

int main(int argc, char *argv[]) 
{
	srand(time(NULL));
	for(i=0; i<20; i++)
	{
		dizi[i]=rand()%11;
		printf("%d ",dizi[i]);
	}
	
	printf("\nAranacak olan sayiyi giriniz: ");
	scanf("%d",&ara);

	for(i=0; i<20; i++)
	{
		if(dizi[i] == ara )
		{
			say++;
		}
	}
		
	printf("Dizide %d adet %d vardir.\n",say,ara);
	return 0;
}
