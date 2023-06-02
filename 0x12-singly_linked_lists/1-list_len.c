#include "lists.h"

/**
 * list_len - This function  prints number of elements in a linked list
 * @h: This is a pointer to the list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{

    size_t t = 0;

    for (; h; h = h->next)
    {
        t++;
    }

    return (t);
}
