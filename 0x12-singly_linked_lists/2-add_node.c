#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: double pointer
 * @str: new string
 *
 * Return: addr of the new element, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *neew;
	unsigned int len = 0;

	while (str[len])
		len++;

	neew = malloc(sizeof(list_t));
	if (!neew)
		return (NULL);

	neew->str = strdup(str);
	neew->len = len;
	neew->next = (*head);
	(*head) = neew;

	return (*head);
}
