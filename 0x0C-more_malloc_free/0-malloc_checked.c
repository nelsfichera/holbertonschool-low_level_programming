#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - allocate some mem
* @b: how much mem
* Return: pointer to mem
*/
void *malloc_checked(unsigned int b)
{
	void *plur;

	plur = malloc(b);
	if (plur == NULL)
		exit(98);
	return (plur);
}
