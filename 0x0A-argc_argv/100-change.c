#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints min no. of coins to make change
 * @argc: no. of arguments
 * @argv: argument vector
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[5];
	int numCoins;
	int coinCount;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins[5] = {25, 10, 5, 2, 1};
	numCoins = sizeof(coins) / sizeof(coins[0]);
	coinCount = 0;
	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coinCount++;
		}
	}
	printf("%d\n", coinCount);
	return (0);
}
