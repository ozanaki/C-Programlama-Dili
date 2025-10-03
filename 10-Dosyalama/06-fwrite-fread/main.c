/*************************************************************************
* Proje : Dosyalama / fwrite, fread
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

FILE *dosya;

double d = 3.141592653589793;
int i = 123;
long l = 987654321L;

// fread(): binary mod acilmis dosyadan binary veriler okumak icin kullanilir
// fwrite(): binary mod acilmis dosyaya binary veriler yazmak icin kullanilir
// not: binary==ikili. (text olmayan verileri ifade eder)

int main(int argc, char *argv[])
{
	dosya = fopen("dosya.bin","wb+");
	if(dosya==NULL)
	{
		printf("- Dosya acilamadi.\n");
		return -1;
	}  
	printf("Dosyaya yazilan degiskenler:\n");
	printf("d:%lf, i:%d, l:%lu\n", d,i,l);

	fwrite(&d, sizeof(double), 1, dosya);
	fwrite(&i, sizeof(int), 1, dosya);
	fwrite(&l, sizeof(long), 1, dosya);
	
	// Degiskenleri sifirliyoruz
	d=0.0;
	i=0;
	l=0L;
	rewind(dosya);

	fread(&d, sizeof(double), 1, dosya);
	fread(&i, sizeof(int), 1, dosya);
	fread(&l, sizeof(long), 1, dosya);

	printf("Dosyadan okunan degiskenler:\n");
	printf("d:%lf, i:%d, l:%lu\n", d,i,l);
		
	fclose(dosya);
	
  return 0;
}

