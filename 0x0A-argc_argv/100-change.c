#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 * @argv: parameter
 * @argc: parameter
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int tmp;
	int counter;

	counter = 0;

	tmp = atoi(argv[1]);
	if (tmp < 0)
	{
		printf("0\n");
		return (0);
	}

	if (argc != 2 || !isdigit(*argv[1]))
	{
		printf("Error\n");
		return (1);
	}

	while (tmp > 0)
	{
		if (tmp >= 25)
			tmp -= 25;
		else if (tmp >= 10)
			tmp -= 10;
		else if (tmp >= 5)
			tmp -= 5;
		else if (tmp >= 2)
			tmp -= 2;
		else if (tmp >= 1)
			tmp -= 1;
		counter++;
	}
	printf("%d\n", counter);
	return (0);
}
