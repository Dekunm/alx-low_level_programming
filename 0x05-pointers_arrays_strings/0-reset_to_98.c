#include "main.h"

/**
 *reset_to_98: A function That takes pointer to an int as parameter
 *
 *@n:input
 *
 *Return: n
 */

void reset_to_98(int *n)
{
	int n;

	int *ptr_n = &n;

	*ptr_n = 98;
}
