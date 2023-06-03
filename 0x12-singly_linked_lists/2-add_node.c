#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - This function adds a new node at the beginning of a linked list
* @head: This is  a pointer to the  list
* @str: This is the new string to added
*
* Return: the address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	for (len = 0; str[len]; len++)
		continue;
	/** allovate memory*/
	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
