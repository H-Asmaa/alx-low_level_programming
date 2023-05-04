#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>

/**
 * binary_to_uint - check the code.
 * @b: a pointer
 * Return: Always count.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	for (; *b != '\0'; b++)
	{
		decimal <<= 1;
		if (*b == '1')
			decimal += 1;
	}
	return (decimal);
}
