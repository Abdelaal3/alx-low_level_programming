#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Provides the count of elements in a linked list
 * @h: Reference to the list_t list using a pointer
 *
 * Return: The count of elements in the variable 'h'.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
