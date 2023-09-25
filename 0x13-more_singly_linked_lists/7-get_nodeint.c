#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) {
  // Create a temporary pointer to traverse the linked list
  listint_t *temp = head;

  // Iterate over the linked list until we reach the desired node or the end of the list
  for (unsigned int i = 0; temp && i < index; i++) {
    temp = temp->next;
  }

  // Return the node at the desired index, or NULL if the index is out of bounds
  return temp;
}
