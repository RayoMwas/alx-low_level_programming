#include "stdio.h"
/**
 * main - prints all arguments it recieves
 * @argc: no. of arguments passed
 * @argv: argument vector
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
