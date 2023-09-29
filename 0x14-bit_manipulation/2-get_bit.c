#include "main.h"

/**
 * get_bit - return the value of a bit at a specific index within a decimal number.
 * @n: This is the number to search.
 * @index: This is the index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
