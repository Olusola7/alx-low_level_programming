#include “main.h” 

#include<stdio.h> 

/** 

* Main – list all the natural numbers below 1024 ( excluded ) 

*  that are multiples of 3 or 5. 

* 

* return : Always 0 

*/ 

Int  main (void) 

{ 

         Int I, sum = 0; 

For (I =0 ; I < 1024; I++) 

{ 

            If   ((I  %  3) == 0 ||  (I % 5) ==  0) 

                 Sum +=  I; 

} 

Printf(“%d\n” , sum); 

Return (0) 

 
