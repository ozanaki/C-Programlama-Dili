/*************************************************************************
* Proje : Pointerlar / Girilen diziyi ekrana tersten yaz
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,len;
char str[255]; // char tipinde 255 elemana sahip dizi tanimlaniyor

int main(int argc, char* argv[])
{
	printf("Bir cumle yaziniz: ");
	fgets(str,sizeof(str),stdin);
	//scanf("%s", str);

	len=strlen(str); // strlen, bir char dizisindeki verinin uzunlugunuz verir.
	for(i=len-1; i>=0; i--)
	{
		printf("%c",str[i]);
	}
	printf("\n");

	return 0;
}

