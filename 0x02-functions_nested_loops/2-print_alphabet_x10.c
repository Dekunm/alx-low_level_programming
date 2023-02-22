#include "main.h"

/**
 * print_alphabet_x10 -print 10 times the alphabet in lowercase
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int i;
	char alph;
	

	for (i = 0;i < 10;)

	{

	       alph = 'a';
	       while (alph <= 'z')
	       {
		       _putchar(alph);
		       alph++;
	       
	       
	       }
		_putchar('\n');
		i++;

	}

}
