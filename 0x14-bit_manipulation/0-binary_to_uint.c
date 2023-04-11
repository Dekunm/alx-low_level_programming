#include "main.h"

/**
 * binary_to_uint - convert binary  to unsigned  int
 * @b: binary
 * Return: unsigned int
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int owl = 0, j;
	unsigned  int numb = 0,  non_binanry = 0;

	if (b == NULL)
	{
		return (non_binanry);

	}

	while  (b[owl] != '\0')
	{
		owl++;
	}
	owl -= 1;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
		{
			return (non_binanry);

		}
		if (b[j] == '1')
		{
			number  += (1 * (1 << owl));
		}
		j++
		owl--;
	}
	return (owl);

}
