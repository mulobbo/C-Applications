#include <stdio.h>
#include <stdlib.h>

FILE*dosya;
int main(int argc, char *argv[]) {
	int sayi=0;
	int sayac=0;
	int i;
	int toplam=0;
	
	start:
		system("CLS");
	printf("KAC ADET SAYI GIRILECEK : ");
    scanf("%d",&sayac);
  
    for  (i=1;sayac>=i; i=i+1)   {

    printf("BIR SAYI GIRINIZ");
    scanf("%d",&sayi);
    if(sayi<0 || sayi>100){
	goto start;
	
	}
    if (sayi % 2 == 0 && sayi % 3 == 0  ){
    	toplam=(toplam+sayi);
    dosya=fopen("sonuc.txt","a");
	fprintf(dosya," %d ,",sayi);	
    	
	}
    
    		}
    		
    	dosya=fopen("sonuc.txt","a");
	fprintf(dosya," TOPLAMLARI : %d  | ",toplam);
    	
    

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
}
