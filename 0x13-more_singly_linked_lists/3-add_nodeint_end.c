#include "lists.h"

/**
 * add_nodeint_end - This function adds list at the end
 * of node
 * @head: This is a pointer that points to the head of the list
 * @n: This is a constant integer
 *
 * Return: Adress of new element otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t;
	listint_t *p = *head;

	t = malloc(sizeof(listint_t));

	/*if memory lloction fails print NULL*/

	if (t == NULL)
	{
		return (0);
	}

	t->n = n;
	t->next = NULL;

	if (*head == NULL)
	{
		*head = t;
		return (*head);
	}

	while (p->next != NULL)
	{
		p = p->next;
	}
	return (*head);
}
