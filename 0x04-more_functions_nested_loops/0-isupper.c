#include "main.h"

/**
 * _isupper -check the  uppercase letters
 * @c:this is a char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
