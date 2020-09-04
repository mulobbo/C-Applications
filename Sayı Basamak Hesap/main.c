#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
int sayi,basamak;

start:
	basamak=0;
	printf("------------------------\n");
printf("SAYIYI GIRINIZ : ");
scanf("%d",&sayi);
do
{

basamak++;
sayi/=10;


}while(sayi>0);

printf("GIRDIGINIZ SAYI %d KATLIDIR \n ",basamak);
goto start;






getch();
}
