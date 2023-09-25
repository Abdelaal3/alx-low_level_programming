#include "lists.h"

/**
 * Function get_nodeint_at_index retrieves the node at a specific index within a linked list.
 * @head: The initial node in the linked list.
 * @index: The index of the desired node.
 *
 * Returns: A pointer to the requested node, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
