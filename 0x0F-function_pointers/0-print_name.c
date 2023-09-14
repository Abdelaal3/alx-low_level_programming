#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - printing name using pointer
 * @name: this is the string to add
 * @f: this is pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
