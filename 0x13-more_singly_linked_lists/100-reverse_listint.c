#include "lists.h"

/**
 * reverse_listint - This function reverses linked list.
 * @head: This is a pointer to the head.
 *
 * Return: first node point.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t;
	listint_t *node;

	t = NULL, node = NULL;
	
	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = t;
		t = *head;
		*head = node;
	}

	*head = t;
	return (*head);
}
