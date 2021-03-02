#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* argstostr - concatenates all strings of arg
* @ac: # of args
* @av: array of args
* Return: str
*/
char *argstostr(int ac, char **av)
{
	int x = 0, n = 0, r = 0, c = 0; /*for iteration*/
	char *args; /*strings of arguments*/

	if (ac == 0 || av == NULL)
		return (NULL);

	while (av[x])
	{
		while (av[x][n])
		{
			r++;
			n++;
		}
		x++;
	}
	args = malloc(r + ac + 1);

	if (args == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
		{
			args[c] = av[x][n];
			c++;
		}
		args[c] = '\n';
		c++;
	}
	args[c] = '\0';
	return (args);
}
