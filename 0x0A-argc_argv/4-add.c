#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argv: parameter
 * @argc: parameter
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int tmp;
	int sum = 0;

	if (argc > 1)
	{
		tmp = argc;
		while (tmp > 1)
		{
			sum += atoi(argv[tmp - 1]);
			tmp--;
		}
		printf("%d", sum);
		printf("\n");
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
