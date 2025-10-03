/*************************************************************************
* Proje : Merhaba Dunya
* Dosya : main.c
* Yazan : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

// Aciklama satirlari yukaridaki gibi /* ile */ arasina blok olarak 
// yazilabilecegi gibi, buradaki // kullanilarak tek satir olarak ta yazilabilir.

#include <stdio.h> // kutupane fonksiyon prototiplerini #include ifadesi ile dosyamiza ekliyoruz.

// Her C/C++ kaynak kodunda sadece bir adet main() fonsiyonu bulunur/bulunmalidir.
int main(int argc, char *argv[]) // Eger bir satirdan sonra kod blogu aciliyorsa, o satir sonunda ; konmaz.
{ // her kod blogu { (kume parantezi) ile baslar
  
  printf("Merhaba C Programlama Dili :)\n"); // Her ifade satirinin sonuna ; konur.

  // Ancak her ifade satiri tek bir satirda yazilmak zorunda degildir.
  printf(
    "Merhaba C Programlama Dili :)\n"
  )
  ;
  	
  return 0; // Calisma burada sonlaniyor ve isletim sistemine hata kodu olarak 0 kodu donduruyoruz.
} // her kod blogu } (kume parantezi) ile biter
