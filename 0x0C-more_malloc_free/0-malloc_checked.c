#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked: cause normal process termination with status value 98
* @b:  Number of bytes to allocate
* Return: a pointer tothe allocatetd memory
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
