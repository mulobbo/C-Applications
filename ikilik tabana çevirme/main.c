#include <conio.h>
#include <math.h>//matematiksel i�lemler yapaca��m�z i�in bu k�t�phaneyi de ekledik.
 
int gg(int a){//i�lemlerin yap�ld��� yard�mc� fonksiyon.
int x,y;
if(a<=0){return a;}//a s�f�rdan k���k olursa fonksiyon durur.
x=a%2;//burada baz� i�lemler yap�l�yor ve say�y� ikilik tabana �eviriyor.
 
a=a-x;
a=a/2;
 
return x+10*gg(a);//void sistemini kullan�yoruz ve bu sayede i�lemimizi sonland�r�yoruz.
 
}
int main(){//ana fonksiyonumuz.
 
int a,b;
printf("bir tam sayi giriniz...");
scanf("%d",&a);
b=gg(a);
printf("girdiginiz sayi ikilik tabanda %d dir...",b);//ekran sonucumuzu veriyor.
getch();
return 0;
 
} 
