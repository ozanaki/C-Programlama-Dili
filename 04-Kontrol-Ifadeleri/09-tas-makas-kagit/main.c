/*************************************************************************
* Proje : Kontrol ifadeleri / tas makas kagit oyunu
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum materyal {tas, makas, kagit};
enum materyal bil,kul;
char sec,c;

int main(int argc, char *argv[])
{
	for(;;)
	{
		srand(time(NULL));
		bil=rand()%3;
		
		printf("Sec: (T)as (M)akas (K)agit: ");
		sec = getchar();
		while ((c = getchar()) != '\n' && c != EOF) { }
		switch(sec)
		{
			case 'T':
			case 't': kul = tas; break;
			case 'M':
			case 'm': kul = makas; break;
			case 'K':
			case 'k': kul = kagit; break;	
			default:
				{
				printf("\a\n");
			  continue;
			}
		}
					
		if(bil==kul)
		{
			printf("Berabere\n");
		}
		else
		{
			if(bil==tas && kul==makas) c=0;
			if(bil==tas && kul==kagit) c=1;
			if(bil==makas && kul==tas) c=1;
			if(bil==makas && kul==kagit) c=0;
			if(bil==kagit && kul==tas) c=0;
			if(bil==kagit && kul==makas) c=1;
		
		  if(c) printf("Sen Kazandin\n");
	  		else printf("Ben Kazandim\n");
		}
		if(kul!=bil) 
		{
			printf("\nTekrar oynayalim mi (E/H): ");
			do
			{
				sec = getchar();
				while ((c = getchar()) != '\n' && c != EOF) { }
			} while (sec!='e' && sec!='E' && sec!='h' && sec!='H');
			
			if(sec == 'h' || sec == 'H')
			{
				break;
			}
		}
	}
	
  return 0;
}
