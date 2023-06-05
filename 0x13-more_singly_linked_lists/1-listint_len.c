#include "lists.h"

/**
 * listint_len - This function return the number
 * of element in linked list
 * @h: This i  pointer that points to the linked list
 * 
 * Return: Return the number of element in the linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	do
	{
		t++;
		h = h->next;
	} while (h != NULL);
	return(t);
}