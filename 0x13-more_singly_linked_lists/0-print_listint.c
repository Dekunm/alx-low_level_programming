#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first node
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int node = 0;

	while (h != NULL)
	{
		print("%d\n",  h->n);
	}
	return (nodes);
}
