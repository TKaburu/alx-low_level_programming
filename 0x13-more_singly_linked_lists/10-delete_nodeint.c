#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to the head of the list.
 * @index: index of node that should be deleted.
 *
 * Return: 1 if succeeded and -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *t;
	unsigned int k;

	if (head == NULL || *head == NULL)
		return (-1);

	p = *head;

	if (index == 0)
	{
		*head = p->next;
		free(p);
	}
	if (index > 0)
	{
		for (k = 0; k < index - 1; k++)
		{
			if (p->next == NULL)
				return (-1);

			p = p->next;
		}
		t = p;
		p = p->next;
		t->next = p->next;
		free(p);
	}
	return (1);
}
