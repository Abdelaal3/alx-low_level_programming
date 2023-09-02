#include "main.h"
/**
 *_memcpy - this function that copies memory area
 *@dest: this is the memory where is stored
 *@src: this is the memory where is copied
 *@n: number of byte
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
