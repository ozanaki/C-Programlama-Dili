/*************************************************************************
* Proje : Operatorler / Aritmetik Operatorler
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int i,j,k;
float f,g;

int main(int argc, char *argv[])
{
	
	// + : her iki tarafindaki degerleri toplar
	// - : soldakinden sagdaki degeri cikarir
	// * : her iki tarafindaki degerleri carpar
	// / : soladaki degeri, sagdaki degere boler
	// (): islem onceligini degistirir
	// islem onceligi: () * / + - 
	// esit oncelikli islemler soldan saga dogru gerceklesir
	i = 3;
	j = i + 5;
	k = j - 2;
	k = k * 10;
	i = (2 * j) + (k - 1);
	printf("i=%d, j=%d, k=%d\n",i,j,k);

	// bilesik operatorler, degisken ile sagindaki degeri isleme sokup sonuc tekrar degiskene atar
	i = 3;
	i += 7;
	i *= 10;
	i -= 20;
	printf("i=%d\n",i);

	j=5; g=5.0;

	i = j / 2; // tam sayilar arasindaki bolme her zaman tam sayi bolmesi olur (ondaliksiz sonuc cikar)
	k = j / 2.0; // eger isleme giren sayilardan en az biri onalikli ise, bolme ondalikli olur
	f = g / 2; // eger isleme giren sayilardan en az biri onalikli ise, bolme ondalikli olur
	printf("i=%d, j=%d, k=%d, f=%f, g=%f\n",i,j,k,f,g);
	
	i = 5 / 2;
	j = 5 % 2; // % operatoru MOD operatorudur. Birinci sayinin ikinci sayiya bolumunden kalani verir.
	printf("i=%d, j=%d, k=%d, f=%f, g=%f\n",i,j,k,f,g);
	
	i = 5;
	// ++, yanina geldigi sayinin degerini bir arttirir.
	j = i++; // ++ degiskenin saginda ise, degisken once isleme girer, degeri sonra artar
	k = ++i; // ++ degiskenin solunda ise, degeri once artar, sonra degisken isleme girer,
	printf("i=%d, j=%d, k=%df\n",i,j,k);

	i = 5;
	// --, yanina geldigi sayinin degerini bir eksiltir.
	j = i--; // -- degiskenin saginda ise, degisken once isleme girer, degeri sonra eksilir
	k = --i; // -- degiskenin solunda ise, degeri once eksilir, sonra degisken isleme girer,
	printf("i=%d, j=%d, k=%df\n",i,j,k);

	i = 3;
	j = 5;
	k = i++ + ++j; // k degiskenine atanacak deger nedir?
	printf("i=%d, j=%d, k=%d\n",i,j,k);
 	
  return 0;
}
