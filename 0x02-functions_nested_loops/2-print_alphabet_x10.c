#include "main.h"
/**
 * print_alphabet_x10- prints lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	char lower;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		if (counter > 0)
		{
			_putchar('\n');
		}
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
	}
}

