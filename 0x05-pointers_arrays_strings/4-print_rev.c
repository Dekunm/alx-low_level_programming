#include  "main.h"

/**
 * print_rev - a reversed string followedby a new  liine
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int lng = 0;

	int o;

	while (*s != '\0')
	{
		lng++;
		s++;
	}

	s--;

	for (o = lng; o > 0;  o--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
