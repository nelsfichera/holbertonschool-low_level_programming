#include <stdio.h>
/**
* main - prints number of arguments passed to program
* @argc: number of strings called
* @argv: pointer to the arguments
* Return: 0
*/
int main (int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", --argc);
	return (0);
}
