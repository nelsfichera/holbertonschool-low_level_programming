#include <stdio.h>
/**
* main - 0-9 but putchar
* Return: 0
*/
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
