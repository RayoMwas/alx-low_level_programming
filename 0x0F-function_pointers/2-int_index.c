#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: an array of integers
 * @size: no. of elements in the array
 * @cmp: pointer to the function
 *
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
/**
 * is_even - checks for even numbers
 * @num: no. to be checked
 *
 * Return: even no.
 */
int is_even(int num)
{
	return (num % 2 == 0);
}
