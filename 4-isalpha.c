#include "main.h"
/**
*_isalpha - return 1 if c is a letter. lowercase or uppercase
*
*@c: the int to print
* return: always 0.
*/
int _isalpha(int c)
{
  if (( c'a' && c < 'z') || ( c > 'A' && c < 'z'))
  {
    return (1);
  }
