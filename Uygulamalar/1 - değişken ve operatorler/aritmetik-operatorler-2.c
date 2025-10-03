/*
Proje : Ekrana Merhaba Yazar
Yazan : Ozan AKI
Tarih : 02-10-2012
*/
#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int c;

int main(int argc, char *argv[])
{
  a = 10;
  b = 2;
  
  c = a + b;  
  printf("A + B = %d \n",c);
  
  c = a - b;
  printf("A - B = %d \n",c);
  
  c = a * b;
  printf("A * B = %d \n",c);
  
  c = a / b;
  printf("A / B = %d \n",c);
  
  system("PAUSE");	
  return 0;
}





