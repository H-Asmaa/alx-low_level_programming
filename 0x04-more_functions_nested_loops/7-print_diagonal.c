#include "main.h"

/**
 * print_diagonal - check the code.
 * @n:variable n
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int q;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (q = 0; q <= i - 1; q++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
