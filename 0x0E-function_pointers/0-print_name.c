#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
