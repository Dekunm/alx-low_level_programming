#include <stdlib.h>
#include "main.h"


/**
 * _realloc - reallocates a memory block using malloc and fre
 * @ptr: pointer to the previiously  allocated memory to ptr
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer tothe newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if  (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr1)
	{
		return (malloc(new_size));
	}
	ptr1 = malloc(new_size);

	if (!ptr1)
	{
		return (NULL);
	}
	old_ptr =  ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			ptr1[i] = old_ptr[i];
		}
	}
		free(ptr);
		return (ptr1);
}
