#include "main.h"

/**
 * jack_bauer - check the code.
 * Description
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			int h_tens = h / 10;
			int h_ones = h % 10;
			int m_tens = m / 10;
			int m_ones = m % 10;

			_putchar(h_tens + '0');
			_putchar(h_ones + '0');
			_putchar(':');
			_putchar(m_tens + '0');
			_putchar(m_ones + '0');
			_putchar('\n');
		}
	}
}
