#include <stdio.h>
#include <stdlib.h>

int asalmi(int sayi)
{
  int sayac;
  
  if(sayi==2) return 1;
  
  for(sayac=2; sayac<sayi; sayac++)
  {
    if(sayi%sayac == 0) return 0;
  }
  
  return 1;
}


int main(int argc, char *argv[])
{
  int i,sayi;
  
  printf("Kaca kadar Asal sayilar listelensin:");
  scanf("%d", &sayi);
  
  for(i=2; i<sayi; i++)
  {
    if(asalmi(i) == 1) printf("%d\n",i);
  }

  system("PAUSE");	
  return 0;
}
