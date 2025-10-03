/*************************************************************************
* Proje : Konsol IO / printf
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// printf, stdout aygitina formatli cikti olustumak icin kullanilir

int main(int argc, char *argv[])
{
	int a=123;
	float f = 123.45678;
	char c = 'A';
	char str[] = "Ozan AKI";

  // Format:
  // % <Flag> <Genislik> <.Hassasiyet> <VeriTipi>

  // Flag:
  //    - : Sola yasli yaz
  //    + : Sayinin isaretini goster (+ veya -)
  //    Bosluk: isaret yerine bosluk koy
  //    0 : Sol bosluklari sifirla doldur
  // Genislik  : Yazdirilacak verinin karakter sayisini sinirlar
  // Hassasiyet: Noktadan sonra yazilan sayi, kac ondalik hane gosterilecegini belirler
  // VeriTipi:
  //    c : Tek bir karakter
  //    s : String (\0 ile biten karakter dizisi)
  //    u : isaretsiz tam sayi (Unsigned)
  //    d,i : Onluk tabanda tam sayi (Decimal)
  //    o : Sekizlik tabanda tam sayi (Octal)
  //    x,X : Onaltilik tabanda tam sayi - kucuk/buyuk harflerle (Hexadecimal)
  //    e,E : Bilimsel formatta gosterim kucuk/buyuk harfle
  //    f : Ondalik sayilar (float, double)
  //    g : General, d, e, f formatlarindan hangisi daha kisa ise
  //    p : Pointer bellek adresi gosterimi icin 
  //    % : ekrana % karakterini yazdirir
  //    l : Tam sayi veri tiplerinin basina eklendiginde "long" tipi olur. (orn. lu, lx)

  // Sayisal formatlar
  printf("Formatlar:\n");
  printf("------------------\n");
  printf("%%d: [%d]\n", a); // a sayisini decimal (onluk tabanda) yazdir
  printf("%%o: [%o]\n", a); // a sayisini octal (sekizlik tabanda) yazdir
  printf("%%x: [%x]\n", a); // a sayisini hexadecimal (onaltilik tabanda) yazdir
  printf("%%u: [%u]\n", a); // a sayisini isaretsiz (unsigned) olarak yazdir
  printf("%%s: [%s]\n",str); // str karakter dizisini string olarak yazdir
  printf("%%c: [%c]\n", c); // c karakterini ekrana ASCII karakteri olarak yazdir
  printf("%%f: [%f]\n", f); // f float sayisini ekrana float olarak yazdir
  printf("%%g: [%g]\n", f); // f float sayisini g olarak ekrana yazdir

  
  // Hizalama ve karakter sinirlandirme
  printf("Hizalama ve karakter sinirlandirma:\n");
  printf("-----------------------------------\n");
  printf("%%f    : [%f]\n", f); // f float sayisini oldugu gibi yazdir
  printf("%%20f  : [%20f]\n", f); // 15 karakter bosluk icerisine saga yasli olarak yaz
  printf("%%20f  : [%020f]\n", f); // 15 karakter bosluk icerisine saga yasli olarak yaz
  printf("%%-20f : [%-20f]\n", f); // 15 karakter bosluk icerisine sola yasli olarak yaz
  printf("%%10.2f: [%10.2f]\n", f); // 10 karakter bosluk icerisine 2 hane ondalik olarak saga yasli yaz
  printf("%%-10.2f: [%-10.2f]\n", f);  // 7 karakter bosluk icerisine 3 hane ondalik olarak sola yasli yaz
    
  // Escape karakterleri
  printf("Esacape Karakterleri:\n");
  printf("-----------------------------------\n");
  printf("Yeni Satir: [\n] \n");  // \n -> New Line (Yeni Satir)
  printf("Satir basi: [\r] \n");  // \r -> Carriage Return (Satir Basi)
  printf("Beep sesi : [\a] \n");  // \a -> Alert (Uyari sesi cikarir)
  printf("Backspace : [\b] \n");  // \b -> Backspace (Bir karaketer geri)
  printf("Tab       : [\t] \n");  // \t -> Horizontal Tab (Yatayda bir tab bosluk)
  printf("Dikey Tab : [\v] \n");  // \v -> Vertical Tab (Ayni hizada bir satir alta gecer)
  printf("Form Feed : [\f] \n");  // \f -> Formfeed (sonraki sayfaya gecer - yazicilarda)
  printf("Ters bolu : [\\] \n");  // \\ -> \ karaterini ekrana yazar
  printf("ASCII Char: [\216] \n"); // \xxx -> xxx kodlu ASCII karakterini yaz
  printf("ASCII Hex: [\xD8] \n");  // \xXX -> XX hexadecimal kodlu ASCII karakterini yaz
   
  // Hatali printf komutu:
  printf("Hatali bir komut: %d\n"); // %d yerine yazilacak degisken verilmemis, ancak derleyici hata vermez
 
  return 0;
}
