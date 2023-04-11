#include "main.h"

/**
 * set_bit - set bit  to 1 at index
 * @n: number
 * @index: index in binary number
 * Return: 1 if succes,or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number = 1;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return  (-1);
	}
	number <<= index;
	/*shift the value in set left by 1 bit*/
	/* number <<= index  iis the same as number = number << index */
	*n = *n | num; /*bitwise OR  operator */

	return (1);

