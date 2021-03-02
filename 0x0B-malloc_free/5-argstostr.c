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
	int x, n = 0; /*for iteration*/
	int position; /*position of pointer*/
	int length; /*length of strings*/
	char *args; /*strings of arguments*/
	
	if (ac == 0 || av == NULL)
		return (NULL);
	
	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n] != '\0'; n++)
		{
			length++;
		}
	}

	args = malloc((length + ac + 1) * sizeof(char));
	
	if args == (NULL)
	{
		free(args);
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (n = 0; av [x][n] != '\0'; n++)
		{
			args = av[x][n];
			position++;
		}
		args[position] = '\n';
		position++;
	}
	args[position] = '\0';
	return (args);
}
