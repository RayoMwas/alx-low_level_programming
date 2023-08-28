#include "main.h"
/**
 * is_palindrome_helper - helps to check if there's a palindrome
 * @start: starting point
 * @end: end point
 *
 * Return: 0 if success
 */
int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return (is_palindrome_helper(start + 1, end - 1));
}
/**
 * is_palindrome - checks for a palindrome
 * @s: pointe to a character
 *
 * Return: 0 if successful
 */
int is_palindrome(char *s)
{
	int length;

	length = strlen(s);
	if (length <= 1)
	{
		return (1);
	}
	return (is_palindrome_helper(s, s + length - 1));
}
