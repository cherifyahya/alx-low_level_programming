#include "lists.h"

/**
 * find_listint_loop - finds the loop
 * @head: l.l
 *
 * Return: address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slo = head;
	listint_t *fas = head;

	if (!head)
		return (NULL);

	while (slo && fas && fas->next)
	{
		fas = fas->next->next;
		slo = slo->next;
		if (fas == slo)
		{
			slo = head;
			while (slo != fas)
			{
				slow = slo->next;
				fas = fas->next;
			}
			return (fas);
		}
	}

	return (NULL);
}
