#include "main.h"
#include <unistd.h>
/**
 * _putchar - writing the character c to stdout
 * @c: This is the character to printing
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
