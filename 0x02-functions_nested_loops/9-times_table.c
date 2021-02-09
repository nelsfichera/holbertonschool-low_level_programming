#include "holberton.h"
/**
* times_table - nine x nine sq of prod
* Return: void
*/
void times_table(void)
{
	int n, o, p;

	for (n = 0; n <= 9; n++)
	{
		for (o = 0; o <= 9; o++)
		{
			p = n * o;

			if (o > 0)
			{
				if (p < 10)
				{
					_putchar(' ');
					_putchar('0' + p);
				}
				else
				{
					_putchar('0' + p / 10);
					_putchar('0' + p % 10);
				}
			}
			else
				_putchar('0');
			if (o == 9)
				continue;
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
