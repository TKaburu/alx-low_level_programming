#include "lists.h"

/**
 * size_t print_listint - This fucnction prints out all elements
 * of the listint_t list
 * @h: Points to the list_t list
 * 
 * Return: The number of node (n)
*/

 size_t print_listint(const listint_t *h)
 {
	int n = 0;
	
	do
	{
		printf("%d\n, h->n");
		n++;
		h = h->next;
	} while (h);
	return (n);
 }

