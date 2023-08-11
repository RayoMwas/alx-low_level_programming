#include <stddef.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a char
 *
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c;
	int i;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
