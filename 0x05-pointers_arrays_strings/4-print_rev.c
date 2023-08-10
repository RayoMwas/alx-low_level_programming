#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to a char
 *
 */
void print_rev(char *s)
{
	int length;
	int i;

	if (s == NULL)
	{
		return;
	}
	/* We need to calculate the length of the string */
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	/* We need to loop through the string and print it in reverse */
	for (i = length - 1; i >= '0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

