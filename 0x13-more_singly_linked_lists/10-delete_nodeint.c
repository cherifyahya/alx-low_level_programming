#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer to the first element in the list
 * @index: index
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head;
	listint_t *pp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
		i++;
	}


	pp = tem->next;
	tem->next = pp->next;
	free(pp);

	return (1);
}
