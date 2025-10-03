#include <stdio.h>
#include <stdlib.h>

int sayi;

int main(int argc, char *argv[]) 
{
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi%2 == 0) { printf("2 ile bolunebilir.\n"); }
	if(sayi%3 == 0) { printf("3 ile bolunebilir.\n"); }
	if(sayi%4 == 0) { printf("4 ile bolunebilir.\n"); }
	if(sayi%5 == 0) { printf("5 ile bolunebilir.\n"); }
	if(sayi%6 == 0) { printf("6 ile bolunebilir.\n"); }
	if(sayi%7 == 0) { printf("7 ile bolunebilir.\n"); }
	if(sayi%8 == 0) { printf("8 ile bolunebilir.\n"); }
	if(sayi%9 == 0) { printf("9 ile bolunebilir.\n"); }
	
	system("pause");
	return 0;
}
