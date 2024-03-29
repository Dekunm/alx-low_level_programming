#include <stddef.h>

/**
 * array_iterator - a function that executes a function as a parameter
 * @array: array to iterate
 * @size: sizeof array
 * @action: pointer to function to call
 * Return: empty if @array and @action iis NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array  != NULL && size > 0 && action != NULL)
	{
		for (index = 0;  index < size; index++)
		{
			action(array[index]);
		}
	}
}
