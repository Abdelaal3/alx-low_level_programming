#include "lists.h"

/**
 * reverse_listint - Inverts the order of a linked list.
 * @head: Points to the initial node in the list.
 *
 * Returns: Pointer to the initial node in the modified list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
