#include "holberton.h"
/**
* jack_bauer - every minute of every day
* Return: void
*/
void jack_bauer(void)
{
	int hrs;
	int mins;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			if (hrs >  9)
			{
				_putchar((hrs / 10) + '0');
				_putchar((hrs % 10) + '0');
			}
			else
			{
				_putchar('0');
				_putchar(hrs + '0');
			}
			_putchar(':');
			if (mins > 9)
			{
				_putchar((mins / 10) + '0');
				_putchar((mins % 10) + '0');
			}
			else
			{
				_putchar('0');
				_putchar(mins + '0');
			}
			_putchar('\n');
		}
	}
}
