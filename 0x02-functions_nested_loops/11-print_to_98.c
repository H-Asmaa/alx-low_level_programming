#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code.
 * @n: variable
 * Description
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98 && n <= 98; i++)
	{
		printf("%d", i);
		fflush(stdout);
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	for (i = n; i >= 98 && n > 98; i--)
	{
		printf("%d", i);
		fflush(stdout);
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	_putchar('\n');
}
