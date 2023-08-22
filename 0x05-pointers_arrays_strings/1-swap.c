#include "main.h"
/**
 * swap_int - swaps the values between two  integers
 * @a: the integer to swap
 * @b: the integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
