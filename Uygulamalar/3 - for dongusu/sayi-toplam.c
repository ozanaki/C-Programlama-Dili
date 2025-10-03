#include <stdio.h>
#include <stdlib.h>

int i;
int toplam=0;
int main(int argc, char *argv[])
{
  for(i=0; i<=100; i=i+1)
  {
    printf("%d + %d = ",toplam,i);
    toplam = toplam + i;
    printf("%d\n", toplam);
  }
  system("PAUSE");	
  return 0;
}
