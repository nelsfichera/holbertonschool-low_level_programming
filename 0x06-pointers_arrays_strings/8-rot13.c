#include "holberton.h"
/**
* rot13 - encrypt in rot13
* @r: the letter
* Return: r
*/
char *rot13(char *r)
{
	int x, y;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; r[x] != '\0'; x++)
	{
		for (y = 0; alpha[y] != '\0'; y++)
		{
			if (r[x] == alpha[y])
			{
				r[x] = rot[y];
				break;
			}
		}
	}
	return (r);
}

