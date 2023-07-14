#include <stdio.h>
/**
 * main- prints lowercase alphabets
 *
 * Return: 0 prints the alphabets
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');	
	return (0);
}
