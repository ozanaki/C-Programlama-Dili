#include <stdio.h>
#include <stdlib.h>

unsigned char vize, final;
float ortalama;

int main(int argc, char *argv[])
{
  vize = 65;
  final = 70;
  
  ortalama = vize * 0.3 + final * 0.7;
  
  printf("ortalama = %f\n", ortalama);
  
  system("PAUSE");	
  return 0;
}
