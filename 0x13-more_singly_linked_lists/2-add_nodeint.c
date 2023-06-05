#include "lists.h"

/**
 * add_nodeint - This function addsa new node at the beginning
 * of a listsint_t
 * @head: This is a pointer to the head of the list
 * @n: This is an integer
 *
 * Return: The adress of new element if succesful
 * otherwise NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t;

	t = malloc(sizeof(listint_t));

	/*if memory alloction fails*/
	if (t == NULL)
		return (0);

	t->n = n;
	t->next = *head;
	*head = t;

	return (t);
}
