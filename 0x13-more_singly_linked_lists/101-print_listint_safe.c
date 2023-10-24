#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Count
 * @head: A pointer
 * Return: If the list is not looped - 0
 * Otherwise - the number of unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tor, *har;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tor = head->next;
	har = (head->next)->next;

	while (har)
	{
		if (tor == har)
		{
			tor = head;
			while (tor != har)
			{
				nodes++;
				tor = tor->next;
				har = har->next;
			}

			tor = tor->next;
			while (tor != har)
			{
				nodes++;
				tor = tor->next;
			}

			return (nodes);
		}

		tor = tor->next;
		har = (har->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Print
 * @head: pointer
 * Return: The number of nod
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
