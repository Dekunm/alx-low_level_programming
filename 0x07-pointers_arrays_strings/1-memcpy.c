#include "main.h"

/**
 * _memcpy - afunction that copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: numbber of bytes
 *
 * Return: Copied memory witth n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned  int n)
{
	int  r;
	int  i = n;

	for (r = 0; r < i; r++)
	{
		dest[r]  = src[r];
		n--;
	}
	return  (dest);
}
