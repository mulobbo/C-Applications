#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayi,basamaksayisi=0;
printf("Birinci Sayiyi Giriniz : ");
scanf("%d",&sayi);
/* Sayinin Kac basamaklý oldugunu buluyoruz **/
while(sayi>0)
{
  basamaksayisi++;  // her bolme isleminden once sayac deðerini arttýr.
  sayi/=10;         // devamlý ona bol.
}
// Girilen 2.Sayinin Kac Basamaklý oldugunu bulduk Þimdi Basamk sayýsýna göre islem yapacaz
printf("Sayýmýz %d Basamaklýdýr. : %d \n",basamaksayisi);
system("pause");
}
