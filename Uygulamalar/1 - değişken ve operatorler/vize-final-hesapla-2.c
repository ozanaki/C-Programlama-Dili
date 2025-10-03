#include <stdio.h>
#include <stdlib.h>

int vize;
int final;
float ortalama;

int main(int argc, char *argv[]) 
{
	printf("Vize notunu giriniz:");
	scanf("%d",&vize);
	
	printf("Final notunu giriniz:");
	scanf("%d",&final);
	
	ortalama=vize*0.3+final*0.7;
	
	printf("Vize: %d, Final: %d, Ortalama: %f\n",vize,final,ortalama);
	
	return 0;
}
