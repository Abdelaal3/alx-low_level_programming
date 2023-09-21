#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - This represents a linked list in a singly format.
 * @str: string - (malloc'ed string).
 * @len: The size or number of characters in the string.
 * @next: points to the following node in the sequence.
 *
 * Description: The structure of a node in a singly linked list
 * for project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
