#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayi,basamaksayisi=0;
printf("Birinci Sayiyi Giriniz : ");
scanf("%d",&sayi);
/* Sayinin Kac basamakl� oldugunu buluyoruz **/
while(sayi>0)
{
  basamaksayisi++;  // her bolme isleminden once sayac de�erini artt�r.
  sayi/=10;         // devaml� ona bol.
}
// Girilen 2.Sayinin Kac Basamakl� oldugunu bulduk �imdi Basamk say�s�na g�re islem yapacaz
printf("Say�m�z %d Basamakl�d�r. : %d \n",basamaksayisi);
system("pause");
}
