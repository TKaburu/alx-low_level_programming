#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_list - This function prints elements in a linked list
* @h: This points to the list tht should be printed
*
* Return: The nodes printed
*/

size_t print_list(const list_t *h)
{
	size_t t = 0;

	do {
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			t++;
	} while (h);

	return (t);
}
