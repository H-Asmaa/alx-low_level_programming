#include "main.h"

/**
 * flip_bits - check the code.
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: int 1 o -1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp;
	unsigned int count;

	count = 0;
	tmp = n ^ m;
	while (tmp > 0)
	{
		if (tmp & 1)
			count++;
		tmp >>= 1;
	}
	return (count);
}
