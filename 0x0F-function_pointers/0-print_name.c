#include "function_pointers.h"
int _putchar(char c);
/**
 * print_name - prints the exact name
 * @name: an array of characters
 * @f: pointer to a function
 * @*: characters
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
