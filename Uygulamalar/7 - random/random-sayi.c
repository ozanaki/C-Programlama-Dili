#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int a = rand()%100;

    printf("%d\n", a);
  
  system("PAUSE");	
  return 0;
}
