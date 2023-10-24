#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer
 * @n: data to insert
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neew;

	neew = malloc(sizeof(listint_t));
	if (!neew)
		return (NULL);

	neew->n = n;
	neew->next = *head;
	*head = neew;

	return (neew);
}
