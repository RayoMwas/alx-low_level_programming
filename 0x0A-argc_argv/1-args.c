#include <stdio.h>
/**
 * main - Prints the no. of arguments passed to it
 * @argc: no. of arguments
 * @argv: argument vector
 *
 * Return: no. of arguments
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
