/*************************************************************************
* Proje : Operatorler / Bitsel islem yapan operatorler
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>


unsigned char a,b,c;

int main(int argc, char *argv[])
{
  // Bitsel islem yapam (Bitwise) operatorler
  // ~ : Degil (bitleri tersine cevirir, 0'lari 1, 1'leri 0 yapar)
  // & : VE (iki sayinin her biti karsilikli olarak VE islemine tabi tutar)
  // | : VEYA (iki sayinin her biti karsilikli olarak VEYA islemine tabi tutar)
  // ^ : XOR (iki sayinin her biti karsilikli olarak XOR islemine tabi tutar)
  // << : solundaki degerin bitlerini sagdaki deger kadar sola kaydirir
  // >> : solundaki degerin bitlerini sagdaki deger kadar saga kaydirir

  a=14; // 1110
  b=7;  // 0111
  
  c = ~a;
  printf("~%d = %d\n", a,c);

  c = a&b;
  printf("%d & %d = %d\n", a,b,c);
  
  c = a|b;
  printf("%d | %d = %d\n", a,b,c);

  c = a^b;
  printf("%d ^ %d = %d\n", a,b,c);

  c = a<<1;
  printf("%d << 1 = %d\n", a,c);

  c = a>>1;
  printf("%d >> 1 = %d\n", a,c);
  
  return 0;
}
