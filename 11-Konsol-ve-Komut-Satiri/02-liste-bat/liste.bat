@echo off
echo %USERNAME% Kullanicinin Masaustu dosya listesi aliniyor

dir "%HOMEDRIVE%%HOMEPATH%\Desktop\*.*" > liste.txt

if errorlevel 0 goto tamam else hata

:tamam
echo dosya listesi basariyla alindi.
goto son

:hata
echo dosya listesli alinamadi

:son
pause
