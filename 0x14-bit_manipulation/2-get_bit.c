#include "main.h"

/**
 * get_bit - check the code.
 * @n: unsigned long int
 * @index: unsigned long int
 * Return: 1 or 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = mask << index;

	if ((n & mask) == mask)
		return (1);
	else
		return (0);
}
