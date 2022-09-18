#include "main.h"
/**
*time_table -prints tables
*
*return: always 0.
*/
void times_table(void)
{
  int a;
  int b;
  int c;
  for (a = 0; a <= 9; a++)
  {
    c = a* b;
    if ((c/10) == 0)
    {
      if (b == 0)
      {
    _putchar ('0');
      }
      if (b !=0)
      {
     _putchar ( ' ' )
     _putchar (( c % 10) + '0');
      }
      if (b < 9)
      {
     _putchar(' , ');
     _putchar (' ');
      }
      }
      eles
      {
    _putchar ((c / 10) + '0');
    _putchar ((c % 10 )'0' );
    if (b < 9)
    {
    _putchar (' , ');
   _putchar (' ');
    }
      }
  }
  _putchar ('\n');
}

        
