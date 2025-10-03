#include <stdio.h>
#include <stdlib.h>

int i,dizi[10];
int toplam, min, maks;
int main(int argc, char *argv[])
{
  for(i=0; i<10; i++)
  {
    printf("%d. elemani giriniz: ",i+1);
    scanf("%d", &dizi[i]);
  }
  
  // toplami bul
  toplam=0;
  for(i=0; i<10; i++)
  {
    toplam = toplam + dizi[i];
  }
  // min ve maks degerleri bul
  min = dizi[0];
  maks = dizi[0];
  for(i=1; i<10; i++)
  {
   if(dizi[i] < min) min = dizi[i];
   if(dizi[i] > maks) maks = dizi[i];
  }
    
  printf("toplam=%d\n", toplam);
  printf("min=%d\n", min);
  printf("maks=%d\n", maks);
  
  system("PAUSE");	
  return 0;
}
