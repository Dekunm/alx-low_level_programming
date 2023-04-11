#include "main.h"

/**
 * get_bit - get bit at index
 *@n: number
 *@index: index in  binary number
 *Return: biiit 0 or 1,or -1 if error
 *
 */

int get_bit(unsigned long int n,unsigned int index)
{
	int bar, beo;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	
	beo = n >> index;


	bar = beo & 1;

	return (bit);

}
