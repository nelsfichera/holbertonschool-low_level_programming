#include <stdio.h>
/**
* main - prints all arguments
* @argc: num of args
* @argv: string of args
* Return: 0
*/
int main(int argc, char *argv[])
{
	int x; /*for iteration*/

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
