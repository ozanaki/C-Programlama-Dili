#include <stdio.h>
#include <stdlib.h>

int a,b,c;
unsigned char q,w,e;

int main(int argc, char *argv[])
{
  a = 100;
  b = 27;
  c = a % b;
  
  printf("a=%d, b=%d, c=%d\n",a,b,c);
  
  q = 5;
  w = 6;
  
  e = q & w;
  printf("%d AND %d = %d\n", q,w,e); 
  e = q | w;
  printf("%d OR %d = %d\n", q,w,e); 
  e = q ^ w;
  printf("%d XOR %d = %d\n", q,w,e); 
  
  system("PAUSE");	
  return 0;
}
