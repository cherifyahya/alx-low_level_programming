#include "lists.h"

/**
 * listint_len - returns the number of elemes
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		nb++;
		h = h->next;
	}

	return (nb);
}
