#include "variadic_functions.h"
/**
 * sum_them_all - Print the sum of all argumets
 * @n: holds the first parameter
 * @...: holds additional values
 *
 * Return: result of addition
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;

	va_list(args);
	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(args, int);
	}
	va_end(args);
	return (result);
}
