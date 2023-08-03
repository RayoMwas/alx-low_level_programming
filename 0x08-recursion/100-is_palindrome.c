#include "main.h"
/**
 * _is_palindrome_helper - checks if a string is a palindrome
 * @s: pointer to a char
 * @start: starting point of a string
 * @end: end point of a string
 *
 * Return: 1 if string is a plaindrome else return 0
 */
int _is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * _is_palindrome - checks if a string is a palindrome 
 * @s: pointer to a char
 *
 *Return: 1 if string is a palindrome else return 0
 */
int is_palindrome(char *s)
{
	int len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	if (len == 0)
	{
		return 1;
	}
	return (_is_palindrome_helper(s, 0, len - 1));
}
