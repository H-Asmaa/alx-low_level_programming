#include "main.h"

/**
 * more_numbers - check the code.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int j;
	int q;

	for (j = 0; j < 10; j++)
	{
		for (i = 48; i < 58; i++)
		{
			_putchar(i);
		}
		for (q = '0'; q <= '4'; q++)
		{
			_putchar('1');
			_putchar(q);
		}
		_putchar('\n');
	}
}
