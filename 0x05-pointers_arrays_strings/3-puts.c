#include "main.h"
/**
 * _puts - prints out a string followed by new line
 * @str: string
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
