#include "main.h"

/**
 * get_bit - check the code.
 * @n: unsigned long int
 * @index: unsigned long int
 * Return: 1 or 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	tmp = 1;
	tmp = tmp << index;
	if ((n & tmp) != 0)
		return (1);
	else if ((n & tmp) != 1)
		return (0);
	else
		return (-1);
}
