#include "lists.h"

/**
 * pop_listint - Remove the first element from a linked list
 * @head: Address of the first element in the linked list
 *
 * Return: The data that was inserted into the linked list but was later deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
