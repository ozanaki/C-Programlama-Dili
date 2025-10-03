#include <stdio.h>
#include <stdlib.h>

char secenek;
int a,b,h,r,alan;
int main(int argc, char *argv[])
{
  do
  {
      printf("------------------\n");             
      printf("1. Dortgen alani\n");
      printf("2. Ucgenin alani\n");
      printf("3. Dairenin alani\n");
      printf("0. Cikis\n");
      printf("Seciminiz: ");
      fflush(stdin);
      scanf("%c", &secenek);
      
      switch(secenek)
      {
        case '1': {
          printf("A kenarini giriniz: ");
          scanf("%d", &a);
          printf("B kenarini giriniz: ");
          scanf("%d", &b); 
          alan = a * b;         
          break;     
        }
        case '2': {
          printf("Tabani giriniz: ");
          scanf("%d", &a);
          printf("Yukseklik giriniz: ");
          scanf("%d", &h); 
          alan = (a * h) / 2;         
          break;
        }
        case '3': {
          printf("Yaricapi giriniz: ");
          scanf("%d", &r);
          alan = 3.14 * r *r;
          break;
        }
        default: {
          if(secenek!='0') printf("Lutfen 1,2 ya da 3 seciniz\n");
        }
      }
      if(secenek!='0') printf("Alan = %d \n", alan);
  } while(secenek != '0');  
   
  system("PAUSE");	
  return 0;
}
