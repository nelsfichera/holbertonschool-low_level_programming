#include "3-calc.h"
/**
* get_op_func - gets the correct function
* @s: operation given (+,-,*,/,%)
* Return: pointer to the desired function
*/
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int x = 0;

	while (ops[x].op != NULL)
	{
		if (*s == *ops[x].op)
			return (ops[x].f);
		x++;
	}
	return (NULL);
}
