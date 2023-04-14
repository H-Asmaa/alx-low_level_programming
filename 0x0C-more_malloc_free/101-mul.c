#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int j;

	if (argc > 2)
	{
		printf("Error\n");
		exit(98);
	}
	for (j = 1; j < (int)strlen(argv[1]); j++)
	{
		if (!isdigit(argv[1][j]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	printf("%d", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
