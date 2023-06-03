#include "lists.h"
#include <stdio.h>

/**
 * print_list -This function prints all the elements of a linked list
 * @h: this is a pointer to the list_t list to print
 *
 * Return: the nodes printed
 */

size_t print_list(const list_t *h)

{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}

