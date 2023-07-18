#include "main.h"
/**
 * print_alphabet_x10- prints lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	char lower;
	int counter;

	for (counter = 1; counter <= 11; counter++)
	{
		if (counter > 1)
		{
			_putchar('\n');
		}
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
	}
}

