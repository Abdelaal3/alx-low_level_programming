#include "main.h"

/**
 * clear_bit - Assigns a value of 0 to a specific bit.
 * @n: Pointer referring to the variable that needs to be modified.
 * @index: indexing of the bit *
 * Return: Returns 1 to indicate success and -1 to indicate failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
