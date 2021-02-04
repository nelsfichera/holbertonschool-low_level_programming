#include <stdio.h>
/**
* main - print alpha no q no e
* Return: 0
*/
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
