
#include <stdio.h>
#include <stdlib.h>

int vize,final;
float ortalama;
char secim;

int main(int argc, char *argv[])
{
	do {
		printf("Vize notunuzu giriniz:");
		scanf("%d",&vize);

		printf("Final notunuzu giriniz:");
		scanf("%d",&final);

		ortalama = vize * 0.3 + final * 0.7;

		printf("Ortalama notunuz %.1f dir.\n",ortalama);

		printf("Devam etmek istiyor musunuz? (E/H):");
		fflush(stdin);
		scanf("%c",&secim);

	} while(secim=='E' || secim=='e');

	system("pause");
	return 0;
}