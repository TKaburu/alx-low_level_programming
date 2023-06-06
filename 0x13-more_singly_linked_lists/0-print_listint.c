#include "lists.h"

/**
 * print_listint - This fucnction prints out all elements
 * of the listint_t list
 * @h: Points to the list_t list
 *
 * Return: The element printed
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

