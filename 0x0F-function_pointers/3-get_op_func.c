#include "3-calc.h"

/**
 * get_op_func - calls function according to char *s
 *
 * @s: the operator passed as argument to the program
 *
 * Return: A pointer to the func that corresponds to the operato
 *         given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	while (ops[i].op != NULL)
	{
		if (ops[i].op != s)
			return (NULL);
		i++;
	}

	return (ops[i].f);
}
