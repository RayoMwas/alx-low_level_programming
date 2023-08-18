#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: pointer storing an array of characters
 * @f: - function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
