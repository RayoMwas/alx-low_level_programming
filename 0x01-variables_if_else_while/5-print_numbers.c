#include <stdio.h>
/**
 * main- prints numbers
 *
 * Return: 0 prints no. from 0 to 10
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 10; numbers++)
	{
		printf("%d", numbers);
	}
	printf("\n");
	return (0);
}
