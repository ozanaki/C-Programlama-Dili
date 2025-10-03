#include <stdio.h>
#include <stdlib.h>

int sayi, tahmin, sayac; 
int main(int argc, char *argv[])
{
  srand(time(NULL));
  sayi = rand()%100;
  printf("0 ile 100 arasinda bir sayi tuttum.\n");
  do
  {
    //sayac++;
    printf("Tahminin? : ");
    scanf("%d", &tahmin);
    
    if(tahmin < sayi)
       printf("Tahminin Benim sayidan KUCUK\n");
       
    if(tahmin > sayi)
       printf("Tahminin Benim sayidan BUYUK\n");
       
    if(tahmin == sayi)
       printf("Tebrikler %d. tahminde bildiniz.\n",sayac);
       
  } while(sayi != tahmin);
  
  system("PAUSE");	
  return 0;
}

