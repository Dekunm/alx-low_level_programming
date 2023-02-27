#include "main.h"

/**
 * puts2 - function should printt only one character out of two
 * starting with the first
 * @str: input
 * Return: 0
 */

void puts2(char *str)
{
	int lng = 0;
	int t = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		lng++;

	}
		t = lng - 1;

		for  (x = 0; x <= t; x++)
		{
			if (x % 2 == 0)
			{
				putchar(str[x]);
			}
		}
		putchar('\n');

}
