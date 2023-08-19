#include "variadic_functions.h"
/**
 * print_strings - prints, strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: more arguments to the function
 *
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *result;

	va_list(args);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(args, char *);
		if (result == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", result);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
