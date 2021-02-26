#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - add n positive numbers
* @argc: num of args
* @argv: str of args
* Return: 0 on completion, 1 if error
*/
int main(int argc, char *argv[])
{
	int sum = 0; /*the value of what's in the array before atoi*/
	int result = 0; /*the sum after atoi*/
	int n; /*for iteration*/
	int x; /*for iteration*/

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (n = 1; n < argc; n++)
	{
		for (x = 0; argv[n][x] != '\0'; x++)
		{
			sum = argv[n][x];
			if (isdigit(sum) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[n]);
	}
	printf("%d\n", result);
	return (0);
}
