#include "holberton.h"
/**
* _strlen - what is the length of the string
* @s: letter makes up string
* Return: count von count
*/
int _strlen(char *s)
{
	int count = 0;
	while(*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
