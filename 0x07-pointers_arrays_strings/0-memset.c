#include "main.h"


/**
 * _memset - fill a  block of memory with a specific  value
 * @s:starting address of memory to  befilled
 * @b:the  desiredvalue
 * @n: number of  bytes to be changed
 *
 * Return: changed array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int  i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}