#include "main.h"

/**
 * print_times_table - check the code.
 * @n: variable
 * Description
 * Return: Always 0.
 */
void print_times_table(int n)
{
	if (n < 15 && n >= 0)
	{
		int i, j, val;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				val = i * j;
				if (j == 0)
				{
					_putchar('0');
				}
				else if (val < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(val + '0');
				}
				else if (val < 100)
				{
					_putchar(' ');
					_putchar((val / 10) + '0');
					_putchar((val % 10) + '0');
				}
				else
				{
					_putchar((val / 100) + '0');
					_putchar(((val / 10) % 10) + '0');
					_putchar((val % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
