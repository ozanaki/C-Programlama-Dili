#include <stdio.h>
#include <stdlib.h>

char isim[80];
int n,uzunluk;

int main(int argc, char *argv[])
{
  printf("Adinizi giriniz:");
  //scanf("%s", &isim[0]); // bo�luk kabul etmez
  fgets(isim,80,stdin); //bo�luklar�da almak i�in

  printf("Adiniz: %s\n",isim);
  
  n=0;
  uzunluk=0;
  while(isim[n] != '\0')
  {
    if(isim[n] != ' ')
    {
      uzunluk++; // uzunluk = uzunluk + 1;
    }
    n++;
  }
  uzunluk--;
  printf("Uzunluk = %d\n", uzunluk);
  
  system("PAUSE");	
  return 0;
}

