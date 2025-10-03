#include <stdio.h>
#include <stdlib.h>

int vize,final;
float ort;

int main(int argc, char *argv[]) 
{
	printf("Vize : ");
	scanf("%d",&vize);

	printf("Final : ");
	scanf("%d",&final);

	if(vize>=0 && vize<=100 && final>=0 && final<=100)
	{
		ort=0.3*vize+0.7*final;
		printf("Ortalama: %.2f ",ort);
		if( ort >= 60 )
		{
			printf(" Gectiniz :) \n");
		}
		else
		{
			printf(" Kaldiniz :( \n");
		}
	}
	else
	{
		printf("Girilen notlar 0 ile 100 arasinde olmalidir.\n");
	}
	
	return 0;
}
