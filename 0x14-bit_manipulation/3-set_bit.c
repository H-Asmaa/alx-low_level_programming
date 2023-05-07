#include "main.h"

/**
 * set_bit - check the code.
 * @n: unsigned long int
 * @index: unsigned long int
 * Return: -1 or 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
