#include <stdio.h>
/**
 * main- prints all no. of base 16 in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	int hexa;

	for (hexa = 0; hexa < 16; hexa++)
	{
		if (hexa < 10)
		{
			putchar(hexa + '0');
		}
		else
		{
			putchar(hexa - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
