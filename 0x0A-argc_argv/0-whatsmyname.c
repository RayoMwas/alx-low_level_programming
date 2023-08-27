#include <stdio.h>
#include <string.h>
/**
 * main - Prints the program name followed by new line
 * @argc: no. of arguments in argv[]
 * @argv: argument vector
 *
 * Return: name of the program
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
