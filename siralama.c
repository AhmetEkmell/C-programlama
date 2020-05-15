#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
 main()
 {
   int n;
   printf("N girisi yapiniz=> ");
   scanf("%d",&n);
   
   int x[n],i,j,tmp; 
   printf("%d tane sayi gir:\n",n);
   for(i=0;i<n;i++)
   {
    printf("%d .Sayi: ",i+1);
    scanf("%d",&x[i]);
   }

   for(i=0;i<n-1;i++)
   {
   		for(j=i+1;j<n;j++)
        {
     		if( x[j]>x[i] )
            {
               tmp = x[i];
      		   x[i] = x[j];
      	  	   x[j] = tmp;
    	    }
        }
   }
 	
	 printf("\n");
	   
   for(i=0;i<n;i++)
   printf("\t %d",x[i]);
   getch();
 
 }
