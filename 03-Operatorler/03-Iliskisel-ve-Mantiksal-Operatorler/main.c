/*************************************************************************
* Proje : Operatorler / Iliskisel ve Mantiksal Operatorler
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

int a,b,c;

int main(int argc, char *argv[])
{
  // Mantiksal Buyuklukler:
  // C Dilinde mantiksal buyukluk yoktur.  Herhangi bir tam sayi degeri;
  //    0 ise --> False
  //    0'dan farkli ise --> True 
  // seklinmde islem gorur.

	a=3;
	b=5;

  // Karsilastirma Operatorleri yukarida tarif edilen mantiksal deger dondurur
  // == : Esit midir?
  // != : Farkli midir?
  // <  : Soldaki sagdakinden Kucuk ya da Esit midir?
  // <= : Soldaki sagdakinden Kucuk mudur?
  // >  : Soldaki sagdakinden Buyuk mudur?
  // >= : Soldaki sagdakinden Buyuk ya da Esit midir ?

  c = (a == b);
  printf("(%d == %d) --> %d\n",a,b,c);

  c = (a != b);
  printf("(%d != %d) --> %d\n",a,b,c);

  c = (a < b);
  printf("(%d < %d) --> %d\n",a,b,c);

  c = (a <= b);
  printf("(%d <= %d) --> %d\n",a,b,c);

  c = (a > b);
  printf("(%d > %d) --> %d\n",a,b,c);

  c = (a >= b);
  printf("(%d >= %d) --> %d\n",a,b,c);

  // Mantiksal Opratorler
  //  ! : DEGIL (soluna geldigi ifadeyi mantiksal DEGIL yapar (tersini alir))
  // && : VE (Solundaki ve Sagindaki degerler arasinda mantiksal VE islemi yapar)
  // || : VEYA (Solundaki ve Sagindaki degerler arasinda mantiksal VEYA islemi yapar)

  c = (a < b) && (a != b);
  printf("(%d < %d) && (%d != %d) --> %d\n",a,b,a,b,c);

  c = !(a >= b) || !(a == b);
  printf("!(%d >= %d) || !(%d == %d) --> %d\n",a,b,a,b,c);

  c = (2*a > b) && (a+b < a*b);
  printf("(2*%d > %d) && (%d+%d < %d*%d) --> %d\n",a,b,a,b,a,b,c);
    	
  return 0;
}
