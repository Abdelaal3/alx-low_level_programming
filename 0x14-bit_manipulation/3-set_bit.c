#include "main.h"

/**
 * set_bit - Assigns a value of 1 to a bit at a specified index.
 * @n: Pointer referring to the variable that needs to be modified.
 * @index: indexing of the bit.
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
