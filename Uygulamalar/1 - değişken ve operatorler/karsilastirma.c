#include <stdio.h>
#include <stdlib.h>

int a,b;
int main(int argc, char *argv[])
{
 do
 {
  printf("1. sayiyi girin: ");
  scanf("%d", &a);

  printf("2. sayiyi girin: ");
  scanf("%d", &b);
  
  if(a<b)
  {
    printf("1. sayi 2. sayidan KUCUKTUR\n");
  }
  if(a>b)
  {
    printf("1. sayi 2. sayidan BUYUKTUR\n");
  }
  if(a==b)
  {
    printf("1. sayi 2. sayiya ESITTIR\n");
  }
 } while(a>=0);
 
  system("PAUSE");	
  return 0;
}
