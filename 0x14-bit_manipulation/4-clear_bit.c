#include "main.h"

/**
 * clear_bit  - clear  bit to 0 at a given iindex
 * @n:  number 
 * @index: index in  the binary
 * Return: 1 if success, or  -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numb = 1;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	numb = ~(numb << index);
	/* bitwise Not  operator is a unary operator
	 * that is why we use the () to nest our left shiftoperator */
	*n = *n & numb;
	return (1);
}
