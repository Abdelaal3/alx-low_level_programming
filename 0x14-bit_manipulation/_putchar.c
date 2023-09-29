#include "main.h"
#include <unistd.h>
/**
 * _putchar - writng the character c.
 * @c: This is the character to print
 *
 * Return: If successful, it returns 1.
 * On error, it returns -1 and sets the appropriate value of errno."
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
