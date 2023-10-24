#include "lists.h"

/**
 * free_listint - free l.l
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}
