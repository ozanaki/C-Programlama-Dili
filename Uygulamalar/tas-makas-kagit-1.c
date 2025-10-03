#include <stdio.h>
#include <stdlib.h>

char bilg,kull;
int i;

int main(int argc, char *argv[]) 
{
	do {
		
	srand(time(NULL));
	i=rand()%3;
	if(i==0) bilg='T';
	if(i==1) bilg='M';
	if(i==2) bilg='K';
	
	do {
		printf("Ben tuttum, sira sende. (T)as (K)agit (M)akas : ");
		fflush(stdin);
		scanf("%c",&kull);
		
		if(kull=='m') kull='M';
		if(kull=='k') kull='K';
		if(kull=='t') kull='T';
		
	} while(kull!='M' && kull!='K' && kull!='T');
	
	printf("Ben ");
	if(bilg=='M') printf("Makas ");
	if(bilg=='T') printf("Tas ");
	if(bilg=='K') printf("Kagit ");
	printf("Sen ");
	if(kull=='M') printf("Makas ");
	if(kull=='T') printf("Tas ");
	if(kull=='K') printf("Kagit ");

	if(bilg=='T' && kull=='M') printf("Ben kazandim.\n");
	if(bilg=='T' && kull=='K') printf("Sen kazandin.\n");
	if(bilg=='M' && kull=='T') printf("Sen kazandin.\n");
	if(bilg=='M' && kull=='K') printf("Ben kazandim.\n");
	if(bilg=='K' && kull=='M') printf("Sen kazandin.\n");
	if(bilg=='K' && kull=='T') printf("Ben kazandim.\n");
	
	if(bilg == kull) printf("Berabere.\n");
	
	} while(bilg == kull);
	
	return 0;
}
