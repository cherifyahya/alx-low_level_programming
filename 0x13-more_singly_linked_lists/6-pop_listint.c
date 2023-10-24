#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: pointer to the first element
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int nbr;

	if (!head || !*head)
		return (0);

	nbr = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (nbr);
}
