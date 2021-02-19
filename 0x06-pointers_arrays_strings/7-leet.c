#include "holberton.h"
/**
* leet - tr 2 leet
* @l: string
* Return: array
*/
char *leet(char *l)
{
	int x = 0;
	int y = 0;
	char lowerAlpha[] = "aeotl";
	char upperAlpha[] = "AEOTL";
	char leetSpeak[] = "43071";

	while (l[x] != '\0')
	{
		for (y = 0; lowerAlpha[y] != '\0'; y++)
		{
			if (l[x] == lowerAlpha[y] || l[x] == upperAlpha[y])
			{
				l[x] = leetSpeak[y];
			}
		}
		x++;
	}
	return (l);
}
