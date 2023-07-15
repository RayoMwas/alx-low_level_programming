#include <stdio.h>
/**
 * main- prints lowercase alphabets on reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
