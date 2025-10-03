#include <stdio.h>
#include <stdlib.h>

int n;
int simdiki, sonraki, sonuc;

int main(int argc, char *argv[])
{
	printf("Kaca kadar asal sayilar listelensin:");
	scanf("%d",&n);

	simdiki=1;
	sonraki=2;

	while(simdiki < n)
	{
		sonuc=simdiki+sonraki;
		printf("%d ",simdiki);
		simdiki=sonraki;
		sonraki=sonuc;
	}

	system("pause");
	return 0;
}