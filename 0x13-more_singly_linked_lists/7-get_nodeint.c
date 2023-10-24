#include "lists.h"

/**
 * get_nodeint_at_index - returns the node
 * @head: first node
 * @index: index of the node
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tem = head;

	while (tem && i < index)
	{
		tem = tem->next;
		i++;
	}

	return (tem ? tem : NULL);
}
