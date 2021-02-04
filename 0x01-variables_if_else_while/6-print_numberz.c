#include <stdio.h>
/**
* main - 0-9 but putchar
* Return: 0
*/
int main(void)
{
	int x;

	for (x = '0'; x <= 9; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
