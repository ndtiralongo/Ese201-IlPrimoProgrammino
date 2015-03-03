#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/*
Programma che visualizza se la temperatura di una cisterna puo' causare pericolo oppure no

*/
main()
{
 float t,t1,t2;
 	printf(" inserire temperatura cisterna ");
	scanf("%f",&t);     
      
     t1=18;
     t2=5;
     
     if(t>=t1)
     {
              printf(" situazione normale ");
     }
     else
     {
         if(t<t2)
         {
                 printf(" danni ");
         }
         else
         {
             printf(" pericolo ");
         }
         }
                 
               
      
      
   
printf("\n\n");
system("PAUSE");
}
    
           
