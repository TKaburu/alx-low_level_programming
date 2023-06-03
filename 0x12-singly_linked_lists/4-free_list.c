#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This function frees the  linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *new = head;
	list_t *temp;

	while (new != NULL)
	{
	temp = new->next;
	free(new->str);
	free(new);
	}
}
