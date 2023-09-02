#include "main.h"
/**
 * _memset - this is fill a block of memory with a specific value
 * @s: start address of memory to be filled
 * @b: the desiring value
 * @n: number of byte to be changing
 *
 * Return: changing array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
