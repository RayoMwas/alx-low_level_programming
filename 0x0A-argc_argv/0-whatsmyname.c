#include <stdio.h>
#include <string.h>
/**
 * main - Prints the program name followed by new line
 * @argc: no. of arguments in argv[]
 * @argv: argument vector
 *
 * Return: name of the program
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		char *program_name = argv[0];
		char *last_slash = strrchr(program_name, '/');

		if (last_slash != NULL)
		{
			program_name = last_slash + 1;
		}
		printf("%s\n", program_name);
	}
	return (0);
}
