#include "lists.h"

/**
 * sum_dlistint - This function gets the sum of all the dat
 * (n) of a given list
 * @head: This is a pointer to the first node
 *
 * Return: The sum or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; sum++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
