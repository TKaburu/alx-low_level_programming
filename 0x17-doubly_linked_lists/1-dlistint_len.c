#include "lists.h"

/**
 * dlistint_len - This function returns number of
 * elements in given list
 * @h: The pointer to the head
 *
 * Return: Number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
