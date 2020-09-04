#include <stdio.h>
 
       char metin[50];
       int i;
       main() 
	   {
       
       printf("KELIME GIRINIZ : ");
       gets(metin);
       
 
 
    for(i=0;i<40;i++) 
    {
    if(metin[i] >90)  
{ metin[i]-='a'-'A'; }//ASCII FARKINI ALARAK ÞARTI SAÐLAYAN DEGERLERÝ BÜYÜTME ÝÞLEMÝ
                 }
                  
                   
    
    printf("%s",metin);
    
    
    getch();
    
     }
