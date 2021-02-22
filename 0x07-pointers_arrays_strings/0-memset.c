#include "holberton.h"
/**
* _memset - fill memory with constant byte
* @n: the bytes of memory
* @s: the pointer to the address in memory
* @b: the constant byte
* Return: memory address s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (s != (void *)0 && n > 0)
	{

		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
