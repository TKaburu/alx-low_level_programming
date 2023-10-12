#include "lists.h"

/**
 * add_dnodeint - A function that adds a node
 * at the beginning of the given list
 * @head: pointer to the adress of head
 * @n: value of the new node
 *
 * Return: ddress of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(struct dlistint_s));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;

	if (*head)
		(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
