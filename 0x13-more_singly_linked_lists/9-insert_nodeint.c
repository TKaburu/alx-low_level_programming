#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts new node at a given position
 * @head: This is a pointer to first node in list.
 * @idx: index of the list where the new node should be added.
 * @n: The data to be added.
 *
 * Return: A pointer to list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t, *k;
	unsigned int m;

	if (head == NULL)
		return (NULL);

	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);

	k->n = n;
	t = *head;

	if (idx == 0)
	{
		k->next = t;
		*head = k;
		return (k);
	}

	for (m = 0; m < idx - 1; m++)
	{
		if (t == NULL)
			return (NULL);
		t = t->next;
	}

	k->next = t->next;
	t->next = k;

	return (k);
}
