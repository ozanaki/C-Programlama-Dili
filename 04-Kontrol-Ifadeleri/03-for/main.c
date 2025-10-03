/*************************************************************************
* Proje : Kontrol ifadeleri / for
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;

  // for dongusu genelde dongu sayisinin onceden belirli oldugu
  // ve bilindigi durumlarda kullanilir.
  
  printf("0'dan basla, 1'er artarak 10'a kadar say: ");
  // for(ilk atama; kosul; artim ifadesi)
  for(i=0; i<10; i++)
  {
		printf("%d  ",i);
  }
  printf("\n");

  printf("10'dan basla, 1'er eksilerek 0'a kadar say: ");
  // for(ilk atama; kosul; artim ifadesi)
  for(i=10; i>0; i--)
  {
		printf("%d  ",i);
  }
  printf("\n");

  printf("0'dan basla, 2'ser artarak 20'ye kadar say: ");
  // for(ilk atama; kosul; artim ifadesi)
  for(i=0; i<20; i+=2)
  {
		printf("%d  ",i);
  }
  printf("\n");

  //for(;;)  // for dongusune kosul ifadesi girilmezse true kabul edilir
  //{
  //  printf("Bir sonsuz dongudeyim, cikamiyorum!\n");
  //}

  return 0;
}
