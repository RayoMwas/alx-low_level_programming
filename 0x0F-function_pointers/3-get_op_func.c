#include "3-calc.h"
/**
 * get_op_func - gets the right function to call according to the operator
 * @s: pointer to char which holds the operator
 *
 * Return: 0 if successful
 */
int (*get_op_func(char *s)) (int, int)
{
	int i;
	op_t ops[5] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};
	i = 0;
	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		++i;
	}
	return (0);
}
