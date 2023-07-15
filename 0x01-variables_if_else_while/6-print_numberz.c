#include <stdio.h>
/**
 * main- prints single digit no. of base 10
 *
 * Return: 0 prints the digits
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
