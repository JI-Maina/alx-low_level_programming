#include "3-calc.h"

/**
 * main - Performs simple (add, mul, sub, div, mod) operations
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0 always if success
 */

int main(int argc, char *argv[])
{
	char *op;
	int operation, first_num, second_num;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	
	first_num = atoi(argv[1]);
	op = argv[2];
	second_num = atoi(argv[3]);
	

	if (get_op_func(op) == NULL || op[1] == '\0')
	{
		printf("Error\n");
		exit(99);
	}
	
	if ((*op == '/' || *op == '%') && (second_num == 0))
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(op)(first_num, second_num);

	printf("%d\n", operation);

	return (0);
}
