#include <stdio.h>
#include <stdlib.h>

char cumle[255];
int n;
int main(int argc, char *argv[])
{
  printf("Bir cumle giriniz: ");
  fgets(cumle,255,stdin);
  
  n=0;
  while(cumle[n]!='\0') { n++; }
  
  while(n-- > 0)  
  {
    printf("%c", cumle[n]);    
  }
  printf("\n");
  
  system("PAUSE");	
  return 0;
}
