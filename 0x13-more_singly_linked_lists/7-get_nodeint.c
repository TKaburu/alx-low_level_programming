#include "lists.h"

/**
 * get_nodeint_at_index - This is a function that 
 * gets the nth node of a linked list
 * @head: pointer to node 0
 * @index: the nth node to be gotten
 *
 * Return: return the nth node pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t = head, *k;
	unsigned int f;

	if (head == NULL)
	{
		return (NULL);
	}

	for (f = 0; f < index; f++)
	{
		if (t->next == NULL)
		{
			return (NULL);
		}
		k = t->next;
		t = k;
	}
	return (t);
}
