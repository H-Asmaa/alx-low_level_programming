#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int _strlen(char *s)
{
	int i;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}

int main(void)
{
	printf("%d\n", _strlen("My Dyn Lib"));
	return (EXIT_SUCCESS);
}
