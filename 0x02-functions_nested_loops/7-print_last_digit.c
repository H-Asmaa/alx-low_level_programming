#include "main.h"

/**
 * print_last_digit - check the code.
 * @n:variable
 * Description
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (n % 10) * (-1);
		_putchar(last_digit + 48);
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + 48);
	}
	return (last_digit);
}
