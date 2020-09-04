#include <conio.h>
#include <math.h>//matematiksel iþlemler yapacaðýmýz için bu kütüphaneyi de ekledik.
 
int gg(int a){//iþlemlerin yapýldýðý yardýmcý fonksiyon.
int x,y;
if(a<=0){return a;}//a sýfýrdan küçük olursa fonksiyon durur.
x=a%2;//burada bazý iþlemler yapýlýyor ve sayýyý ikilik tabana çeviriyor.
 
a=a-x;
a=a/2;
 
return x+10*gg(a);//void sistemini kullanýyoruz ve bu sayede iþlemimizi sonlandýrýyoruz.
 
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
