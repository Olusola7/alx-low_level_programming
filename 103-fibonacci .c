#include <stdio.h> 

/** 

*main ā finds and prints the sum  of the  even-valued terms 

*followed by a new line 

* return: always 0 (succes) 

*/ 

Int main (void) 

{ 

               Int I ; 

               Unsigned long int j, k,  next,  sum; 

                J = 1; 

                K = 2; 

                Sum = 0; 

For (I = 1  ; I < = 33; ++I) 

{ 

                 If (j < 4000000 && (j % 2) == 0) 

{ 

                     Sum = sum + j ; 

} 

                     Next = j + k; 

                      J =  k; 

                      K = next 

} 

Printf (ā%1u\nā , sum) 

Return (0) 

} 

 
