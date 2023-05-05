#include "main.h"
#include <math.h>

/**
 * print_binary_helper - check the code.
 * @n: a variable
 * Return: Always count.
 */
void print_binary_helper(unsigned long int n)
{
	if (n > 1)
		print_binary_helper(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
/**
 * print_binary - check the code.
 * @n: a variable
 * Return: Always count.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_helper(n);
}
