#include "lists.h"

/**
 * get_dnodeint_at_index - This function gets node at
 * a specific index
 * @head: pointer to the head node
 * @index: The specific index
 *
 * Return: The node or Null if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
