#include "main.h"
/**
 * print_sign - checks if a no. is -ve or +ve or 0
 * @n: stores the no.
 *
 * Description: retuns 1 if no. is +ve and prints its sign
 * retuns 0 if the no is 0 and prints 0
 * returns -1 if the no. is negative and prints its sign
 * Return: 0 if program runs successfuly
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
