@echo off

rem Aldigi iki parametreyi main.exe dosyasina parametre olarak aktariyor.
rem main.exe dosyasinin pozitif donus degerini toplam sonucu olarak ekrana yazdiriyor
rem main.exe dosyasinin negatif donus degeri bir hata kodu olarak degerlendiriliyor.

main.exe %1 %2

if %ERRORLEVEL% LSS 0 goto hata
:tamam
echo Sonuc: %1 ile %2 nin toplami %ERRORLEVEL% eder.
goto son
:hata
echo Hata olustu. Hata kodu: %ERRORLEVEL%
:son
