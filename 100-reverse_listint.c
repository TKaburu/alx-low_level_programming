#include "lists.h"

/**
 * reverse_listint - This is a function that  reverses a linked list
 * @head: Thi i a double pointer
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_ptr;
	listint_t *ptr;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	previous_ptr = *head;
	ptr = (*head)->next;

	while (ptr != NULL)
	{
		(*head)->next = ptr->next;
		ptr->next = previous_ptr;
		previous_ptr = ptr;
		ptr = (*head)->next;
	}
	*head = previous_ptr;

	return (*head);
}
