/*************************************************************************
* Proje : Konsol IO / scanf
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// scanf, stdin aygitindan formatli veri okumak icin kullanilir

int main(int argc, char *argv[])
{
	char c;
  int a;
  float f;
  int i,r;
  int gun,ay,yil;
	char buf[32];

  // Format:
  // % <Kontrol> <VeriTipi>

  // Kontrol:
  //    * : Yapilan okuma islemini herhangi degiskene aktarma.
  //    % : % karaterini oku
  //    [] : Eslesebilecek karakterlerin kumesi
  //    [^] : Bu karakter kumesindekilerin haricindeki karakterler 
  //    Genislik : Okunacak bilginin maksimum genisligi
  // VeriTipi:
  //    c : Tek bir karakter oku
  //    s : String oku (\t, \n ya da bolsuk ile biten karakter dizisi)
  //    u : isaretsiz tam sayi oku (Unsigned)
  //    d,i : Onluk tabanda tam sayi oku (Decimal)
  //    o : Sekizlik tabanda tam sayi oku (Octal)
  //    x : Onaltilik tabanda tam sayi oku (Hexadecimal)
  //    e : Bilimsel formatta sayi oku
  //    f : Ondalik sayi oku (float, double)
  //    p : Pointer bellek adresi oku

  printf("Bir tam sayi giriniz:");
  r=scanf("%d",&a);
  printf("Girdiginiz deger: %d\n(scanf dondurdugu deger: %d)\n",a,r);

  printf("Ondalikli bir sayi giriniz:");
  r=scanf("%f",&f);
  printf("Girdiginiz deger: %f\n(scanf dondurdugu deger: %d)\n",f,r);

  printf("Klavyeden bir karakter giriniz:");
  r=scanf("%c",&c);
  printf("Girdiginiz deger: %c\n(scanf dondurdugu deger: %d)\n",c,r);

  printf("Bir kelime giriniz:");
  r=scanf("%s",buf);
  printf("Girdiginiz deger: %s\n(scanf dondurdugu deger: %d)\n",buf,r);

  printf("Bir tarih giriniz (gun.ay.yil): ");
  r=scanf("%d%*[./-]%d%*[./-]%d",&gun,&ay,&yil);
  printf("Girdiginiz deger: %d.%d.%d\n(scanf dondurdugu deger: %d)\n",gun,ay,yil,r);
  
  return 0;
}
