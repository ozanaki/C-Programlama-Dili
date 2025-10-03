#include <stdio.h>
#include <stdlib.h>

int dizi[10];
int indis;
int main(int argc, char *argv[])
{
  printf("indis numarasini giriniz:");
  scanf("%d",&indis);
  
  dizi[0]=1;
  dizi[1]=3;
  dizi[2]=5;
  dizi[3]=7;
  dizi[4]=9;
  dizi[5]=11;
  dizi[6]=13;
  dizi[7]=15;
  dizi[8]=17;
  dizi[9]=19;
    
  printf("dizi[%d] = %d\n",indis, dizi[indis]);
  
  system("PAUSE");	
  return 0;
}







