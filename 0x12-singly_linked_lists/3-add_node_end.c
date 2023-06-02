#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of a linked list
 * @head: This is a pointer to the list_t list
 * @str: This is a string
 *
 * Return: address of the new element
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[len])
	{
		length++
	}

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->length = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp = temp->next);
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
