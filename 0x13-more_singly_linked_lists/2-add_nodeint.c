#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the start of a linked list.
 * @head: A reference to the initial node in the list.
 * @n: The value or content to be placed in the newly created node.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
