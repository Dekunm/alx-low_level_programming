#include "main.h"

/**
 * flip_bits - Counts  the number of bits needed to  get from one number to another
 *
 *@n: number
 *@m: number to fliip n to
 *
 *Return: number of bits to fliip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned  long int m)
{
	unsigned long int desp, bit = 0;

	desp = n ^ m;

	while (desp > 0)
	{
		bit  += (desp & 1);
		desp >> 1;
	}

	return (bit);
}
