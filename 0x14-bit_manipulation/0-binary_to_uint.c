#include "main.h"
/**
 * binary_to_uint - converts binary numbers to unsigned int
 * @b: character array holding the values
 *
 * Return: result or 0 if n is null or doesn't have either digit 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;
	int power;
	int length;
	char current_char;

	result = 0;
	power = 1;
	length = 0;
	/* checking if b is null */
	if (b == NULL)
		return (0);
	while (b[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		current_char = b[i];
		if (current_char != '0' && current_char != '1')
			return (0);
		if (current_char == '1')
			result += power;
		power *= 2;
	}
	return (result);
}
