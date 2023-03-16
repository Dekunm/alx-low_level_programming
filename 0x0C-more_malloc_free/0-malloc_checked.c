#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - cause normal process termination with status vvalue 98
 *
 * @b:  allocated memory
 *Return: a poiinter to tthe allocatetd memory
 */

void *malloc_ckecked(unsigned int b)
{
	void *ptr;

	ptr  = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
