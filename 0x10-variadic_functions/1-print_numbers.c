#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed btw numbers
 * @n: no. of integers to be passed to the function
 * @...: additional arguments
 *
 * Return:
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;

	va_list(args);
	va_start(args, n);
	if (separator != NULL)
		for (i = 0; i < n; i++)
		{
			result = va_arg(args, int);
			printf("%d", result);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	printf("\n");
	va_end(args);
}
