#include "lists.h"

/**
 * free_listint - Thi function frees the list
 * @head: A pointer to the head of the list
 *
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}

