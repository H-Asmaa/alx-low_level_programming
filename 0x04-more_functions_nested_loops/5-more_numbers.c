#include "main.h"

/**
 * more_numbers - check the code.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int j;
	int c;

	for (j = 0; j < 10; j++)
	{
		c = 48;
		for (i = 0; i <= 14; i++)
		{
			if (c == 58)
			{
				c = '0';
			}
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
