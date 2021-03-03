#include "holberton.h"
#include <stdlib.h>
/**
* getcharcount - number of char pointers to get
* @arr: the str
* Return: number of *char needed
*/
int getcharcount(char *arr)
{
	char pre;
	int count, x, extra;

	x = 0;
	count = 0;
	extra = 1;
	pre = ' ';

	while (arr[x] != '\0')
	{
		if (arr[x] == ' ' & pre != ' ')
			count = count + 1;
		pre = arr[x];
		x = x + 1;
	}
	if (x != 0 && pre == ' ')
		extra = 0;
	return (count + extra);
}
/**
* wlen - return word length
* @arr: pointer
* Return: 0 on null, len otherwise
*/
int wlen(char *arr)
{
	int x = 0;

	while (arr[x] != '\0' && arr[x] != ' ')
	{
		x++;
	}
	return (x);
}
/**
* skipstones - skip over the spaces
* @ptr: the pointer
* Return: the new pointer
*/
char *skipstones(char *ptr)
{
	char *x;

	x = ptr;
	while (*x == ' ')
	{
		x = x + 1;
	}
	return (x);
}
/**
* **strtow - split the string
* @str: the str
* Return: the array
*/
char **strtow(char *str)
{
	char **ret; /*return*/
	char *here; /*current place*/
	char *strptr; /*pointer to str*/
	char *tmp; /*buffer*/
	int words = 0; /*words*/
	int letters = 0; /*letters*/
	int x = 0; /*for iteration*/
	int n = 0; /*for iteration*/

	if (str == NULL || (str[0] == '\0'))
		return (NULL);

	tmp = skipstones(str);

	if (*tmp == '\0' || (tmp[0] == ' ' && tmp[1] == '\0'))
		return (NULL);

	strptr = str;
	words = getcharcount(str);
	ret = (char **)malloc((words + 1) * sizeof(char *));

	if (ret == NULL)
		return (NULL);
	for (x = 0; x < words; x++)
	{
		strptr = skipstones(strptr);
		letters = wlen(strptr);
		here = (char *)malloc((letters + 1) * sizeof(char));

		if (here == NULL)
			return (NULL);
		for (n = 0; n < letters; n++)
		{
			here[x] = strptr[n];
		}
		here[n] = '\0';
		ret[x] = here;
		strptr = strptr + letters;
	}
	ret[x] = NULL;
	return (ret);
}
