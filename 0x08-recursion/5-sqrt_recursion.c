#include "main.h"
/**
 * _sqrt_helper - finds the natural square root of n
 * @n: no. to calculate square root
 * @guess: no. to square
 *
 * Return: natural square root of n otherwise, -1
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a no.
 *@n: int to be calculated
 *
 * Return: natural square root of n otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
