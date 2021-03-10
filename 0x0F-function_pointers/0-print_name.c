#include "function_pointers.h"
/**
* print_name - does what it says
* @name: the name
* @f: pointer to function
* Return: v0!d
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
