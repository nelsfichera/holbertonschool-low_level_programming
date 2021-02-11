 #include "holberton.h"
  2 /**
  3 * _isdigit - is it number or not
  4 * @c: c is a thing that i'm doing
  5 * Return: 1 if yes 0 if no
  6 */
  7 
  8 int _isdigit(int c)
  9 {
 10 
 11         if (c >= '0' && c <= '9')
 12                 return (1);
 13         else
 14                 return (0);
 15 }
