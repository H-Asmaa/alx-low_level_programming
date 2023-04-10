#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *@argv: parameter
 *@argc: parameter
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int first;
	int second;
	int res;

	if (argc > 2)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		res = first * second;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
