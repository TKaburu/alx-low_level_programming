#include "lists.h"

/**
 * free_listint2 - This function free the list and sets
 * head to NULL
 * @head: This is a pointer that pointsto head of list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *currentnode;
	listint_t *newnode;

	if (head == NULL)
	{
		return;
	}
	currentnode = *head;

	while (currentnode != NULL)
	{
		/** copy address of next node to pointer **/
		newnode = currentnode->next;

		free(currentnode);

		currentnode = newnode;
	}

	*head = NULL;
}
