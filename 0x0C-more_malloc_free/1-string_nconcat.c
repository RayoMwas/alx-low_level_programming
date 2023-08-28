#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size in bytes
 *
 * Return: 0 if successful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
	{
		n = s2_len;
	}
	result = (char *)malloc(s1_len + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, s1_len);
	strncat(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
