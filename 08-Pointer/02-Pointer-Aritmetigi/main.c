/*************************************************************************
* Proje : Pointer / Pointer Aritmetigi
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

// pointerler uzerinde aritmetik islem yapildiginda, 
// artim ve eksilme miktarlari tanimlandigi veri tipinin bellekte kapladigi alan kadar olur.
// her bir veri tipinin bellekte kapladigi alan sizeof() operatoru ile byte cinsinden ogrenilebilir.

// tanimlanan pointerlarin baslangic degerini NULL, yani, 0 (sifir) yapiyoruz.
// Aslinda bu gecersiz bir bellek adresidir ancak biz de zaten bu bellek adreslerine erismeyecegiz.
const char *cp = NULL;
const short *sp = NULL;
const int *ip = NULL;
const long *lp = NULL;
const float *fp = NULL;
const double *dp = NULL;

int main(int argc, char* argv[])
{
	// Tanimlanan tum pointerlerin bellek adreslerini ekrana yaz
	printf("cp: %u\n", cp);
	printf("sp: %u\n", sp);
	printf("ip: %u\n", ip);
	printf("lp: %u\n", lp);
	printf("fp: %u\n", fp);
	printf("dp: %u\n", dp);

	// Tanimlanan tum pointerleri bir arttir
	printf("-----------------\n");
	cp++;
	sp++;
	ip++;
	lp++;
	fp++;
	dp++;

	// Tanimlanan tum pointerlerin bellek adreslerini ekrana tekrar yaz
	printf("cp: %u\n", cp);
	printf("sp: %u\n", sp);
	printf("ip: %u\n", ip);
	printf("lp: %u\n", lp);
	printf("fp: %u\n", fp);
	printf("dp: %u\n", dp);

	// Tanimlanan tum pointer veri tiplerinin sizeof() bilgilerini yazdir.
	printf("-----------------\n");
	printf("sizeof(*cp): %u\n", sizeof(*cp));
	printf("sizeof(*sp): %u\n", sizeof(*sp));
	printf("sizeof(*ip): %u\n", sizeof(*ip));
	printf("sizeof(*lp): %u\n", sizeof(*lp));
	printf("sizeof(*fp): %u\n", sizeof(*fp));
	printf("sizeof(*dp): %u\n", sizeof(*dp));

	// Tanimlanan tum pointer degikenlerin kendilerinin sizeof() bilgilerini yazdir.
	printf("-----------------\n");
	printf("sizeof(cp): %u\n", sizeof(cp));
	printf("sizeof(sp): %u\n", sizeof(sp));
	printf("sizeof(ip): %u\n", sizeof(ip));
	printf("sizeof(lp): %u\n", sizeof(lp));
	printf("sizeof(fp): %u\n", sizeof(fp));
	printf("sizeof(dp): %u\n", sizeof(dp));

	return 0;
}

