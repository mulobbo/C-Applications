#include <stdio.h>
#include <stdlib.h>

struct bilgiler{
char adi[10],soyadi[10],baba[10],ana[10],memleket[10];
};

struct bilgiler blg;

FILE*dosya;

int main(int argc, char *argv[]) {
	
char  nick[10];
int sifre;
int kontrol1;
char secim;
int sayac=3;
char adi[10],soyadi[10],baba[10],ana[10],memleket[10];
char ogrisim[10],ogrsoyad[10],ogrders[10];
int ogrvize,ogrfinal;
float ortalama;
char secim2;
char*harfnot;
char*kalma;
char okunanlar;
char cikis;




start:
system("CLS");
printf("KULLANICI ADINIZI GIRINIZ\n");
gets(nick);
printf("SIFRENIZI GIRINIZ\n");
scanf("%d",&sifre);

strupr(nick);
kontrol1=strcmp(nick,"SELAM");

if (kontrol1==0 && sifre==2020 ){
	anamenu:
	system("CLS");
	printf("*******************************MENU************************************ \n");
	printf("                A - OGRENCI BILGI / DERS - NOT ISLEMLERI                \n");
	printf("                B - OGRENCI BILGILERI YUKLE                             \n");
	printf("                C - SISTEMDEN CIKIS                                     \n");
	printf("*********************************************************************** \n");
	printf(" LUTFEN BIR SECIM YAPINIZ:_                                             \n");
	
	scanf("%s",&secim);
	
	if(secim=='A'||secim=='a'){
	system("CLS");
	printf("1 ya da 2 yi seciniz");
	scanf("%s",&secim2);
		if (secim2=='1'){
		
		
		system("CLS");
		
		dosya=fopen("bilgiler.txt","a");
		
printf("Ogrencinin Adi Nedir        : ");
 scanf("%s",&blg.adi);
 printf("Ogrencinin Soyadi Nedir    : ");
 scanf("%s",&blg.soyadi);
 printf("Ogrencinin Baba Adi Nedir  : ");
 scanf("%s",&blg.baba);
 printf("Ogrencinin Ana Adi Nedir   : ");
 scanf("%s",&blg.ana);
 printf("Ogrencinin Memleketi Nedir : ");
 scanf("%s",&blg.memleket);
 
 fprintf(dosya,"ADI:%s , SOYADI:%s , BABA ADI:%s , ANA ADI:%s , MEMLEKET:%s   | ",blg.adi,blg.soyadi,blg.baba,blg.ana,blg.memleket);
 printf("BASARILI KAYIT");
 getch();
 goto anamenu;
 
 
 
 
}


if (secim2=='2'){
	dosya=fopen("ogrbilgi.txt","a");
	printf("Ogrencinin Adi Nedir        : ");
 scanf("%s",&ogrisim);
 printf("Ogrencinin Soyadi Nedir    : ");
 scanf("%s",&ogrsoyad);
 printf("Ogrencinin Dersi Nedir  : ");
 scanf("%s",&ogrders);
 printf("Ogrencinin Vize Notu Nedir   : ");
 scanf("%d",&ogrvize);
 printf("Ogrencinin Final Notu Nedir : ");
 scanf("%d",&ogrfinal);
 
	ortalama=(ogrvize*0.4)+(ogrfinal*0.6);
	
	if (ortalama>=60){
	kalma = "GECTI"	;
	}
	else{
	kalma = "KALDI";
	}
	
if (ortalama<45)
harfnot="FF";
else if(ortalama<60)
harfnot="DC";
else if(ortalama<75)
harfnot="BC";
else if(ortalama<85)
harfnot="BC";
else if(ortalama<91)
harfnot="BB";
else if(ortalama<101)
harfnot="AA";	

 fprintf(dosya,"Ogrenci %s %s , %s dersinden %.2f ortalama , %s ile %s",ogrisim,ogrsoyad,ogrders,ortalama,harfnot,kalma);
 printf("BASARILI KAYIT");
  getch();
 goto anamenu;

}
		
} 

if(secim=='B'||secim=='b'){
system("CLS");
system("color 2");
{
dosya = fopen("ogrbilgi.txt", "r");
if (dosya != NULL)
{
do
{
okunanlar=getc(dosya);
printf("%c",okunanlar);
}
while (!feof(dosya));
getch();
getchar() ;
}
else
{
printf("BOYLE BIR DOSYA BULUNAMADI");
}
}
}	

if(secim=='C'||secim=='c'){
	
printf("Programdan cikis yapilsin mi (e/h)?");	
	scanf("%s",&cikis);
	if (cikis =='e' ||cikis=='E' )
	exit(EXIT_SUCCESS);
	
	if (cikis =='h' ||cikis=='H' )
	goto anamenu;
	
	
	
	
	
}






	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

else{
	if (sayac>1 ){
	
	sayac=sayac-1;
	printf("KALAN HAKKINIZ %d \n",sayac);
	getch();
	fflush(stdin);
	goto start;
	}
	else{
		exit(EXIT_SUCCESS);
	}
	
	
}
























return 0;
}
