#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int swap;

	if (a > b)
	{
		swap = a;
		a = b;
		b = swap;
	}
	if (a > c)
	{
		swap = a;
		a = c;
		c = swap;
	}
	if (b > c)
	{
		swap = b;
		b = c;
		c = swap;
	}

	return (c);
}
