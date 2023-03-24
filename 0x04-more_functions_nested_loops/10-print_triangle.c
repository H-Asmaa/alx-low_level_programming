#include "main.h"

/**
 * print_square - check the code.
 * @size:variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int q;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (q = 0; q < size; q++)
			{
				if (size - i <= q + 1)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
