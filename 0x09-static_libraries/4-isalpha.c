#include "main.h"

/**
 * _isalpha - checking alphabetic character
 * @c: a character to be checked
 * Return: 1 if c is a letter, 0 is not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
