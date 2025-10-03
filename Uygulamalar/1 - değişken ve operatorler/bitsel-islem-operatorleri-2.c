#include <stdio.h>
#include <stdlib.h>


void bityaz(unsigned char sayi)
{
    printf("%d : ",sayi);
    if((sayi&0x80)==0x80) printf("1"); else printf("0");
    if((sayi&0x40)==0x40) printf("1"); else printf("0");
    if((sayi&0x20)==0x20) printf("1"); else printf("0");
    if((sayi&0x10)==0x10) printf("1"); else printf("0");
    if((sayi&0x08)==0x08) printf("1"); else printf("0");
    if((sayi&0x04)==0x04) printf("1"); else printf("0");
    if((sayi&0x02)==0x02) printf("1"); else printf("0");
    if((sayi&0x01)==0x01) printf("1"); else printf("0");
    printf("\n");
}

unsigned char sayi;

int main(int argc, char *argv[])
{
  printf("Bir sayi giriniz: ");
  scanf("%d",&sayi);  
  
  bityaz(sayi);
  
  //??? sayinin 2. bitini 1 yap
  //sayi = sayi | 0x04;
  //bityaz(sayi);
  
  //??? sayinin 2. bitini 0 yap
  //sayi = sayi & (~0x04);
  //bityaz(sayi);
  
  //??? sayinin 4. ve 5. bitini 1 yapan komutu yaziniz
  sayi = ???
  bityaz(sayi);
  
  //??? sayinin 3. ve 6. bitlerini 0 yapan komutu yaziniz
  sayi = ???
  bityaz(sayi);
  
  system("PAUSE");	
  return 0;
}
