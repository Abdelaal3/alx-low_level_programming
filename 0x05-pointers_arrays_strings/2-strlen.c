#include "main.h"
/**
 * _strlen - Provides the length of a string as the output
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
