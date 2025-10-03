#include <stdio.h>
#include <stdlib.h>

int vize, final;
float ort;

int main(int argc, char *argv[])
{
    do
    {
      printf("Vize : ");
      scanf("%d", &vize);
    
      printf("Final : ");
      scanf("%d", &final);
      
      ort = vize*0.3+final*0.7;
      printf("Basari notu: %f\n", ort);
      if(ort >= 60)
      {
        printf("GECTI\n");
      }
      else
      {
          printf("KALDI\n");
      }
    } while(vize>=0 && final>=0);
    
  system("PAUSE");	
  return 0;
}


