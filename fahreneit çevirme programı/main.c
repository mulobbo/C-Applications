#include <stdio.h>//ilgili kütüphanleri tanýmlýyoruz
#include <stdlib.h>//ilgili kütüphanleri tanýmlýyoruz

void Celcius (int deger,float cel)//Celcius isimli bir void olusturduk ve parantez içine deðisþenleri virgülle ayýrarak yazdýk
{
cel=((deger-32)/1.8);//cel adlý deðiþken fahreneit celcius çevirme formülünü yazýyoruz((deðer-32)/1.8)
printf(" %d Fahreneit %.2f Celcius tur",deger,cel);//iþlemi yapýlmýþ celcius fahreneit cümle içinde yazdýrýyoruz 	
}

int main() {

int deger;//ilgili deðiþkenleri tanýmlýyoruz
float cel;//ilgili deðiþkenleri tanýmlýyoruz
	
printf("LUTFEN FAHRENEIT GIRINIZ : ");//fahreneit istediðimiz metnimiz
scanf("%d",&deger);//deðer adýndaki deðiþkene okutuyoruz
Celcius(deger,cel);//celcius adli deðiþkeni çalýþtýrýp parantez içindeki deðiþkenleri gönderiyoruz
	
getch();//enter
}
