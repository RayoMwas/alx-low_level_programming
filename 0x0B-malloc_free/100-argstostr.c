#include "main.h"
/**
 * argstostr - Concatanates all arguments of your program
 * @ac: no. of arguments
 * @av: character pointer
 *
 * Return: 0 if successful
 */
char *argstostr(int ac, char **av)
{
	int totalLength;
	int i;
	char *result;
	int currentPosition;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	totalLength = 0;
	for (i = 0; i < ac; i++)
	{
		totalLength += strlen(av[i]) + 1;
	}
	result = (char *)malloc(totalLength * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	currentPosition = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(result + currentPosition, av[i]);
		currentPosition += strlen(av[i]);
		result[currentPosition] = '\n';
		currentPosition++;
	}
	return (result);
}
