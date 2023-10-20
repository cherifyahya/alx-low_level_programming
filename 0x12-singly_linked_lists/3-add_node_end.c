#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: double pointer
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ne;
	list_t *te = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	ne = malloc(sizeof(list_t));
	if (!ne)
		return (NULL);

	ne->str = strdup(str);
	ne->len = len;
	ne->next = NULL;

	if (*head == NULL)
	{
		*head = ne;
		return (ne);
	}

	while (te->next)
		te = te->next;

	te->next = ne;

	return (ne);
}
