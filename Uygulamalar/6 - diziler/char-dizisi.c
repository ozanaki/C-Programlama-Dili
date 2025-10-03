#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char kelime[30];
int i;
int uzun;

int main(int argc, char *argv[]) 
{
	//kelime[0] = 'O';
	//kelime[1] = 'Z';
	//kelime[2] = 'A';
	//kelime[3] = 'N';
	
	//strcpy(kelime,"EY EDIP ADANADA PIDE YE");
	printf("Bir cumle giriniz: ");
	gets(kelime);
	
	uzun=strlen(kelime);
	printf("Girilen cumlenin uzunlugu: %d karakter.\n", uzun);
	
	for(i=0; i<uzun; i++)
	{
		printf("%c",kelime[i]);
	}	
	printf("\n");
	for(i=uzun-1; i>=0; i--)
	{
		printf("%c",kelime[i]);
	}	
	
	return 0;
}
