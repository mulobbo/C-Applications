#include <stdio.h>//ilgili k�t�phanleri tan�ml�yoruz
#include <stdlib.h>//ilgili k�t�phanleri tan�ml�yoruz

void Celcius (int deger,float cel)//Celcius isimli bir void olusturduk ve parantez i�ine de�is�enleri virg�lle ay�rarak yazd�k
{
cel=((deger-32)/1.8);//cel adl� de�i�ken fahreneit celcius �evirme form�l�n� yaz�yoruz((de�er-32)/1.8)
printf(" %d Fahreneit %.2f Celcius tur",deger,cel);//i�lemi yap�lm�� celcius fahreneit c�mle i�inde yazd�r�yoruz 	
}

int main() {

int deger;//ilgili de�i�kenleri tan�ml�yoruz
float cel;//ilgili de�i�kenleri tan�ml�yoruz
	
printf("LUTFEN FAHRENEIT GIRINIZ : ");//fahreneit istedi�imiz metnimiz
scanf("%d",&deger);//de�er ad�ndaki de�i�kene okutuyoruz
Celcius(deger,cel);//celcius adli de�i�keni �al��t�r�p parantez i�indeki de�i�kenleri g�nderiyoruz
	
getch();//enter
}
