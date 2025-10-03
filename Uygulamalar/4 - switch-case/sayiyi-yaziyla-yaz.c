#include <stdio.h>
#include <stdlib.h>

int sayi,birler,onlar,yuzler;

void yaz(int basamak)
{
  switch(basamak)
  {
    case 1: printf("bir"); break;
    case 2: printf("iki"); break;
    case 3: printf("uc"); break;
    case 4: printf("dort"); break;
    case 5: printf("bes"); break;
    case 6: printf("alti"); break;
    case 7: printf("yedi"); break;
    case 8: printf("sekiz"); break;
    case 9: printf("dokuz"); break;
  }  
}

int main(int argc, char *argv[])
{
  printf("Bir sayi giriniz: ");
  scanf("%d", &sayi);

  if(sayi==0) printf("sifir");
  
  yuzler = sayi / 100;
  sayi = sayi % 100;
  onlar = sayi / 10;
  birler = sayi % 10;
  
  if(yuzler>0)
  {
    if(yuzler>1) yaz(yuzler);
    printf("yuz");
  }
  
  switch(onlar)
  {
    case 1: printf("on"); break;
    case 2: printf("yirmi"); break;
    case 3: printf("otuz"); break;
    case 4: printf("kirk"); break;
    case 5: printf("elli"); break;
    case 6: printf("altmis"); break;
    case 7: printf("yetmis"); break;
    case 8: printf("seksen"); break;
    case 9: printf("doksan"); break;
  }
  
  yaz(birler);

  printf("\n");
  
  system("PAUSE");	
  return 0;
}
