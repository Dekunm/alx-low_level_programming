#include  <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integers
 * @min: miniimum  range of value  stored
 * @max: Maximum range of values and numbbber  of elements
 * Return: POINTER TO THE NEW ARRAY
 */

int *array_range(int min, int max)
{
	int *ptrr;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min +  1;
	ptrr = malloc(sizeof(int) * size);
	if (ptrr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptrr[i] = min++;
	}
	return   (ptrr);
}

