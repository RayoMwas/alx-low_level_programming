#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: charact pointer
 *
 * Return: 0 if successful
 */
char *_strdup(char *str)
{
	size_t length;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
