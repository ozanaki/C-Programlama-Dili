#include <stdio.h>
#include <stdlib.h>

char bil, kul;

int main(int argc, char *argv[])
{
  do 
  {
      switch(rand()%3)
      {
        case 0: bil='T'; break;
        case 1: bil='M'; break;
        case 2: bil='K'; break;
      }
      
      printf("Seciniz: (T)as  (M)akas  (K)agit ?");
      fflush(stdin);
      scanf("%c", &kul);
      
      if(bil==kul) printf("Berabere\n");
      
      if(bil=='T' && kul=='M') printf("Ben kazandim\n");
      if(bil=='T' && kul=='K') printf("Sen kazandin\n");
    
      if(bil=='M' && kul=='K') printf("Ben kazandim\n");
      if(bil=='M' && kul=='T') printf("Sen kazandin\n");
    
      if(bil=='K' && kul=='T') printf("Ben kazandim\n");
      if(bil=='K' && kul=='M') printf("Sen kazandin\n");   

    } while(bil==kul);
    
  system("PAUSE");	
  return 0;
}
