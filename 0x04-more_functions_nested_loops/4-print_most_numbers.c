#include "main.h"
/**
 * _putchar - prints single charactes
 * @c: single character
 *
 * Return: 0
 */
int _putchar(char c);
/**
 * print_most_numbers - prints no 0 to 9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
