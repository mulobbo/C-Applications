#include <stdio.h>
#include <stdlib.h>


int main()
{
       int i,toplam=0;
       for (i=1;i<=10;i++)/*For dongusu ile sayilari birer birer 10a kadar arttiriyoruz..*/

       {
           toplam += i;
       }
       
      toplam=toplam-(2+4);

      printf("1'den 10'a kadar olan sayilarin 2 ve 4 haric toplami = %d'dir..",toplam);


      
      getch();
     
  }
