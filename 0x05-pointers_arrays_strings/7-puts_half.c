#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to a char
 *
 */
void puts_half(char *str)
{
	int i;
	int half_length;
	int n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	half_length = i / 2;
	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
		for (i = n; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	for (i = half_length; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
