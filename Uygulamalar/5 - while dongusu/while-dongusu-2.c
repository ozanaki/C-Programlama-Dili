#include <stdio.h>
#include <stdlib.h>

int sayi;

int main(int argc, char *argv[]) 
{
	sayi=0;
	
	while(sayi < 5)
	{
		printf("Merhaba while %d\n",sayi);
		sayi++;
	}
	
	printf("----------------------------\n");
	
	do {
		printf("Merhaba do while %d\n",sayi);
		sayi--;
	} while(sayi > 0);
	
	return 0;
}
