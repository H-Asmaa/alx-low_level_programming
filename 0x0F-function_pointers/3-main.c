#include "3-calc.h"

/**
 * main - check the code
 * @argc: parametre
 * @argv: parametre
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (b == 0 && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	func = get_op_func(op);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(a, b));

	return (0);
}
