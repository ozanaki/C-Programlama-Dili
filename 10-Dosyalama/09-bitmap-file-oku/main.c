/*************************************************************************
* Proje : Dosyalama / bitmap dosya bilgilerini oku
* Dosya : main.c
* Yazar : M. Ozan AKI (ozanaki@hotmail.com)
* Tarih : 01.10.2012
* Derleyici : MinGW GCC
**************************************************************************/

#include <stdio.h>
#include <stdint.h>

#pragma pack(push, 1) // Ensures structures are packed (no padding)
typedef struct {
    uint16_t bfType;      // File type, must be 'BM'
    uint32_t bfSize;      // Size of the file in bytes
    uint16_t bfReserved1; // Reserved, must be 0
    uint16_t bfReserved2; // Reserved, must be 0
    uint32_t bfOffBits;   // Offset to start of image data in bytes
} BITMAPFILEHEADER;

typedef struct {
    uint32_t biSize;          // Size of this header in bytes
    int32_t  biWidth;         // Width of the image in pixels
    int32_t  biHeight;        // Height of the image in pixels
    uint16_t biPlanes;        // Number of color planes (must be 1)
    uint16_t biBitCount;      // Number of bits per pixel
    uint32_t biCompression;   // Compression type (0 = uncompressed)
    uint32_t biSizeImage;     // Image size in bytes
    int32_t  biXPelsPerMeter; // Horizontal resolution in pixels per meter
    int32_t  biYPelsPerMeter; // Vertical resolution in pixels per meter
    uint32_t biClrUsed;       // Number of colors in the color table
    uint32_t biClrImportant;  // Number of important colors
} BITMAPINFOHEADER;
#pragma pack(pop)

FILE *dosya; //our file pointer
char dosyaadi[255];
BITMAPFILEHEADER fileHeader;
BITMAPINFOHEADER infoHeader;

int main(int argc, char *argv[])
{
	printf("Bitmap dosya adini giriniz: ");
	scanf("%s", dosyaadi);
	
	//open filename in read binary mode
	dosya = fopen(dosyaadi,"rb");
	if (dosya == NULL)
	{
		printf("Dosya acilamadi.\n");
		return -1;
	}
	
	// Read the BITMAPFILEHEADER
    fread(&fileHeader, sizeof(BITMAPFILEHEADER), 1, dosya);

    // Ensure it's a BMP file by checking the magic number
    if (fileHeader.bfType != 0x4D42)  // 'BM' in hexadecimal
	{   
        printf("Hata: Bu dosya gecerli bir BMP dosyasi degil.\n");
        fclose(dosya);
        return 1;
    }

 	// Read the BITMAPINFOHEADER
    fread(&infoHeader, sizeof(BITMAPINFOHEADER), 1, dosya);

    // Display the information
    printf("Width: %d pixels\n", infoHeader.biWidth);
    printf("Height: %d pixels\n", infoHeader.biHeight);
    printf("Bits per pixel: %d\n", infoHeader.biBitCount);
    printf("Compression: %d\n", infoHeader.biCompression);
    printf("Image size: %d bytes\n", infoHeader.biSizeImage);
    printf("Colors used: %d\n", infoHeader.biClrUsed);
    printf("Important colors: %d\n", infoHeader.biClrImportant);

    fclose(dosya);

    return 0;
}
