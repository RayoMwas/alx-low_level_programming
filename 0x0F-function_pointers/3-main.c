#include "3-calc.h"
/**
 * main - Displays the result to stdout
 * @ac: int holding the sign
 * @av: holds the integers which operation is performed upon
 *
 * Return: 0 if successful
 */
int main(int ac, char *av[])
{
	int num1, num2;
	char *operator;
	int (*fun)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(av[1]);
	operator = av[2];
	num2 = atoi(av[3]);
	if (num2 == 0 && (strcmp("/", operator) == 0 || strcmp("%", operator) == 0))
	{
		printf("Error\n");
		return (100);
	}
	fun = get_op_func(operator);
	if (fun == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", fun(num1, num2));
	return (0);
}
